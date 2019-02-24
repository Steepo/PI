# PI
<P STYLE="margin-bottom: 0in">In occasione del Pgreco day, con la
quinta info1 dell’ITIS Magistri Cumacini, abbiamo deciso di
calcolare il maggior numero possibile di decimali esatti di P Greco.</P>
<P STYLE="margin-bottom: 0in">Ovviamente, non disponendo di computer
per il calcolo intensivo, il progetto non ha come obiettivo quello di
un record, ma, sotto l’aspetto didattico di esplorare i seguenti
temi:</P>
<UL>
	<LI><P STYLE="margin-bottom: 0in">Approfondire i vari algoritmi per
	il calcolo di pgreco e confrontarli</P>
	<LI><P STYLE="margin-bottom: 0in">Imparare l’utilizzo di librerie
	che consentono di utilizzare un numero illimitato di decimali</P>
	<LI><P STYLE="margin-bottom: 0in">Realizzare i programmi di calcolo
	con differenti linguaggi e confrontare i tempi di esecuzione</P>
	<LI><P STYLE="margin-bottom: 0in">Operare con differenti sistemi
	operativi, a parità di algoritmo e linguaggio, e confrontare i
	tempi di esecuzione</P>
	<LI><P STYLE="margin-bottom: 0in">Installare ed utilizzare tools di
	calcolo parallelo</P>
</UL>
<P STYLE="margin-bottom: 0in">Questo al fine di meglio imparare a
conoscere i Sistemi di elaborazione e gestire la complessità degli
algoritmi.</P>
<P STYLE="margin-bottom: 0in"><BR>
</P>
<P STYLE="margin-bottom: 0in">Gli strumenti a disposizione utilizzati
sono stati:</P>
<UL>
	<LI><P STYLE="margin-bottom: 0in">Un MacBook Pro Quad core i7 3.5 Gh</P>
	<LI><P STYLE="margin-bottom: 0in">Un HP Dual Core Quad Thread  i7
	2.60 Ghz</P>
	<LI><P STYLE="margin-bottom: 0in">Un MacBook Pro Dual Core i5 3.3
	Ghz</P>
	<LI><P STYLE="margin-bottom: 0in">Un ASUS Dual core Quad Thread i7
	2.9 Ghz</P>
</UL>
<P STYLE="margin-bottom: 0in">I sistemi operativi:</P>
<UL>
	<LI><P STYLE="margin-bottom: 0in">Windows 10</P>
	<LI><P STYLE="margin-bottom: 0in">OSX 10.12 Sierra 
	</P>
	<LI><P STYLE="margin-bottom: 0in">Linux Ubuntu 16.4</P>
</UL>
<P STYLE="margin-bottom: 0in">Le librerie:</P>
<UL>
	<LI><P STYLE="margin-bottom: 0in">GMP per l’utilizzo dei
	BigDecimal in C</P>
	<LI><P STYLE="margin-bottom: 0in">BigDecimal per Java</P>
</UL>
<P STYLE="margin-bottom: 0in">I linguaggi:</P>
<UL>
	<LI><P STYLE="margin-bottom: 0in">Java</P>
	<LI><P STYLE="margin-bottom: 0in">C</P>
</UL>
<P STYLE="margin-bottom: 0in">I compilatori:</P>
<UL>
	<LI><P STYLE="margin-bottom: 0in">Xcode</P>
	<LI><P STYLE="margin-bottom: 0in">Gcc</P>
	<LI><P STYLE="margin-bottom: 0in">MPI per la gestione del calcolo
	parallelo</P>
	<LI><P STYLE="margin-bottom: 0in">JavaC</P>
</UL>
<P STYLE="margin-bottom: 0in"><BR>
</P>
<P STYLE="margin-bottom: 0in">Gli algoritmi</P>
<UL>
	<LI><P STYLE="margin-bottom: 0in">Gauss Legendre</P>
	<LI><P STYLE="margin-bottom: 0in">Bpp</P>
	<LI><P STYLE="margin-bottom: 0in">“aghi”</P>
</UL>
<P STYLE="margin-bottom: 0in"><BR>
</P>
<P STYLE="margin-bottom: 0in">Premesso che il miglior risultato è
stato di più di 16 milioni di decimali in un tempo complessivo di
circa un’ora e venti minuti, quindi neppure tanto disprezzabile,
visto che il tempo non poteva essere più di tanto per non “friggere”
le CPU che sono state costantemente monitorate durante l’esecuzione,
prestazioni della ventola di raffreddamento comprese,</P>
<P STYLE="margin-bottom: 0in">i risultati si riassumono nella tabella
che segue:</P>
<P STYLE="margin-bottom: 0in"><BR>
</P>
<TABLE WIDTH=657 CELLPADDING=7 CELLSPACING=0>
	<COL WIDTH=114>
	<COL WIDTH=98>
	<COL WIDTH=98>
	<COL WIDTH=98>
	<COL WIDTH=88>
	<COL WIDTH=74>
	<TR VALIGN=TOP>
		<TD ROWSPAN=2 WIDTH=114 HEIGHT=5 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>PC</P>
		</TD>
		<TD COLSPAN=3 WIDTH=323 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>Java</P>
		</TD>
		<TD COLSPAN=2 WIDTH=176 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>C-MPI</P>
		</TD>
	</TR>
	<TR VALIGN=TOP>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>1 Milioni</P>
		</TD>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>2 Milioni</P>
		</TD>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>4 Milioni</P>
		</TD>
		<TD WIDTH=88 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>8 Milioni</P>
		</TD>
		<TD WIDTH=74 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>16 Milioni</P>
		</TD>
	</TR>
	<TR VALIGN=TOP>
		<TD WIDTH=114 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>MacBook Pro Quad Core</P>
		</TD>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>5 minuti</P>
		</TD>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>15 minuti</P>
		</TD>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>45 minuti</P>
		</TD>
		<TD WIDTH=88 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>23 minuti</P>
		</TD>
		<TD WIDTH=74 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>1 ora e 40 minuti</P>
		</TD>
	</TR>
	<TR VALIGN=TOP>
		<TD WIDTH=114 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>MacBook Pro Dual Core</P>
		</TD>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>5 minuti</P>
		</TD>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>15 minuti</P>
		</TD>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>45 minuti</P>
		</TD>
		<TD WIDTH=88 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>//</P>
		</TD>
		<TD WIDTH=74 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>2 ore</P>
		</TD>
	</TR>
	<TR VALIGN=TOP>
		<TD WIDTH=114 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>HP</P>
		</TD>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>5 minuti</P>
		</TD>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>15 minuti</P>
		</TD>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>1 ora e 5 minuti</P>
		</TD>
		<TD WIDTH=88 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>//</P>
		</TD>
		<TD WIDTH=74 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>//</P>
		</TD>
	</TR>
	<TR VALIGN=TOP>
		<TD WIDTH=114 HEIGHT=2 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>ASUS</P>
		</TD>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>6/7 minuti</P>
		</TD>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>22 minuti</P>
		</TD>
		<TD WIDTH=98 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>//</P>
		</TD>
		<TD WIDTH=88 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>//</P>
		</TD>
		<TD WIDTH=74 STYLE="border: 1px solid #00000a; padding-top: 0in; padding-bottom: 0in; padding-left: 0.08in; padding-right: 0.08in">
			<P ALIGN=CENTER>//</P>
		</TD>
	</TR>
</TABLE>
<P STYLE="margin-bottom: 0in"><BR>
</P>
<P STYLE="margin-bottom: 0in"><BR>
</P>
<P STYLE="margin-bottom: 0in">Conclusioni</P>
<P STYLE="margin-bottom: 0in">Gli studenti si sono affacciato per la
prima volta nel mondo del calcolo intensivo e hanno cominciato a
comprenderne le tematiche e a studiare soluzioni a fronte di
algoritmi di complessità crescente.</P>
<P STYLE="margin-bottom: 0in">Le architetture hardware e software
(sistema operativo in particolare) sono state “sviscerate” al
fine di trarre le maggiori prestazioni di calcolo.</P>
<P STYLE="margin-bottom: 0in">Il lavoro ha appassionato gli studenti,
che, oltre alle ore di laboratorio, hanno usato anche parecchio del
loro tempo libero.</P>
<P STYLE="margin-bottom: 0in">Nel complesso ci si è divertiti e
misurati, su un tema specifico, col resto del mondo.</P>
</BODY>
</HTML>
