#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

mpz_t temp1, temp2, t, t239, pows;
void arctg(mpz_t res, unsigned long base, mpz_t pows)
{
    int i, neg = 1;
    mpz_tdiv_q_ui(res, pows, base);
    mpz_set(temp1, res);
    for (i = 3; ; i += 2) {
        mpz_tdiv_q_ui(temp1, temp1, base * base);
        mpz_tdiv_q_ui(temp2, temp1, i);
        if (mpz_cmp_ui(temp2, 0) == 0) break;
        if (neg) mpz_sub(res, res, temp2);
        else	  mpz_add(res, res, temp2);
        neg = !neg;
    }
}

char * get_digits(int n, size_t* len)
{
    mpz_ui_pow_ui(pows, 10, n + 20);
    
    arctg(t, 5, pows);
    mpz_mul_ui(t, t, 16);
    
    arctg(t239, 239, pows);
    mpz_mul_ui(t239, t239, 4);
    
    mpz_sub(t, t, t239);
    mpz_ui_pow_ui(pows, 10, 20);
    mpz_tdiv_q(t, t, pows);
    
    *len = mpz_sizeinbase(t, 10);
    return mpz_get_str(0, 0, t);
}

int main(int c, char **v)
{
    unsigned long accu = 16384, done = 0;
    size_t got;
    char *s;
    
    mpz_init(temp1);
    mpz_init(temp2);
    mpz_init(t);
    mpz_init(t239);
    mpz_init(pows);
    
    while (1) {
        s = get_digits(accu, &got);
        
        /* write out digits up to the last one not preceding a 0 or 9*/
        got -= 2; /* -2: length estimate may be longer than actual */
        while (s[got] == '0' || s[got] == '9') got--;
        
        printf("%.*s", (int)(got - done), s + done);
        free(s);
        
        done = got;
        
        /* double the desired digits; slows down at least cubically */
        accu *= 2;
    }
    
    return 0;
}
