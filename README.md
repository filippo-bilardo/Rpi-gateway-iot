<span id="docs-internal-guid-6274c343-7fff-bcf0-e543-20d4f532ee6e"><span style="font-family: &quot;playfair display&quot;; font-weight: 700; vertical-align: baseline; white-space: pre-wrap;"><span style="font-size: large;">Comunicazione con i Socket - </span></span><span style="font-family: &quot;playfair display&quot;; font-weight: 700; vertical-align: baseline; white-space: pre-wrap;"><span style="font-size: large;">Gateway IOT</span></span></span><br />
<span style="font-family: &quot;playfair display&quot;; font-size: 24pt; font-weight: 700; vertical-align: baseline; white-space: pre-wrap;"><br /></span>
<span id="docs-internal-guid-7ab96450-7fff-0e6c-8029-5f8efd212014"></span><br />
<ul style="margin-bottom: 0pt; margin-top: 0pt;">
<li dir="ltr" style="background-color: transparent; color: black; font-family: Arial; font-size: 18pt; font-style: normal; font-variant: normal; font-weight: 400; list-style-type: disc; text-decoration: none; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<span style="background-color: transparent; color: black; font-family: &quot;arial&quot;; font-size: 18pt; font-style: normal; font-variant: normal; font-weight: 400; text-decoration: none; vertical-align: baseline; white-space: pre;">Realizzazione di un Gateway IOT per la visualizzazione remota dei dati provenienti dai sensori.</span></div>
</li>
<li dir="ltr" style="background-color: transparent; color: black; font-family: Arial; font-size: 18pt; font-style: normal; font-variant: normal; font-weight: 400; list-style-type: disc; text-decoration: none; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<span style="background-color: transparent; color: black; font-family: &quot;arial&quot;; font-size: 18pt; font-style: normal; font-variant: normal; font-weight: 400; text-decoration: none; vertical-align: baseline; white-space: pre;">Il dato di temperatura arriva tramite collegamento seriale con il microcontrollore che gestisce il sensore di temperatura.</span></div>
</li>
<li dir="ltr" style="background-color: transparent; color: black; font-family: Arial; font-size: 18pt; font-style: normal; font-variant: normal; font-weight: 400; list-style-type: disc; text-decoration: none; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 16pt; margin-top: 0pt;">
<span style="background-color: transparent; color: black; font-family: &quot;arial&quot;; font-size: 18pt; font-style: normal; font-variant: normal; font-weight: 400; text-decoration: none; vertical-align: baseline; white-space: pre;">I dati ricevuti verranno inseriti all’interno di una pagina web, che utilizzerà un oggetto canvas di html5 per la rappresentazione grafica del dato.</span></div>
</li>
<li dir="ltr" style="background-color: transparent; color: black; font-family: Arial; font-size: 18pt; font-style: normal; font-variant: normal; font-weight: 400; list-style-type: disc; text-decoration: none; vertical-align: baseline; white-space: pre;"><span style="font-size: 18pt;">il server risponderà a richieste http provenienti da client remoti trasmettendo il file html contenente il dato aggiornato</span></li>
</ul>
<div>
<span style="font-family: &quot;arial&quot;;"><span style="font-size: 24px; white-space: pre;"><br /></span></span></div>
<div>
<span style="font-family: &quot;arial&quot;;"><span style="font-size: 24px; white-space: pre-wrap;"><br /></span></span></div>
<div>
<span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b"></span><br />
<div dir="ltr" style="line-height: 1.2; margin-bottom: 0pt; margin-top: 0pt;">
<span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b"><span style="background-color: #f8e71c; font-family: &quot;oswald&quot;; font-size: 30pt; vertical-align: baseline; white-space: pre-wrap;">Obiettivi didattici</span></span></div>
<span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b">
</span>
<br />
<div>
<span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b"><span style="background-color: #f8e71c; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f"></span></span><br />
</span><br />
<ul style="font-family: Oswald; font-size: 30pt; margin-bottom: 0pt; margin-top: 0pt; white-space: pre-wrap;"><span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b"><span style="background-color: #f8e71c; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f">
<li dir="ltr" style="background-color: transparent; font-family: &quot;Playfair Display&quot;; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<span style="background-color: transparent; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline; white-space: pre-wrap;">saper programmare con i socket in C</span></div>
</li>
<li dir="ltr" style="background-color: transparent; font-family: &quot;Playfair Display&quot;; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<span style="background-color: transparent; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline; white-space: pre-wrap;">saper utilizzare le librerie sui socket</span></div>
</li>
<li dir="ltr" style="background-color: transparent; font-family: &quot;Playfair Display&quot;; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<span style="background-color: transparent; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline; white-space: pre-wrap;">saper utilizzare le librerie per l’utilizzo dell’uart</span></div>
</li>
<li dir="ltr" style="background-color: transparent; font-family: &quot;Playfair Display&quot;; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<span style="background-color: transparent; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline; white-space: pre-wrap;">saper utilizzare le librerie per l’accesso al’hardware GPIO della Raspberry PI</span></div>
</li>
<li dir="ltr" style="background-color: transparent; font-family: &quot;Playfair Display&quot;; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<span style="background-color: transparent; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline; white-space: pre-wrap;">saper utilizzare le librerie per l’utilizzo dei file</span></div>
</li>
<li dir="ltr" style="background-color: transparent; font-family: &quot;Playfair Display&quot;; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<span style="background-color: transparent; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline; white-space: pre-wrap;">eseguire semplici operazioni sui file</span></div>
</li>
<li dir="ltr" style="background-color: transparent; font-family: &quot;Playfair Display&quot;; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 16pt; margin-top: 0pt;">
<span style="background-color: transparent; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline; white-space: pre-wrap;">implementare un semplice protocollo di comunicazione tra la raspberry e il microcontrollore</span></div>
</li>
</span></span></span></ul>
<span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b">
<span style="background-color: #f8e71c; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f">
</span></span></span><br />
<div>
<span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b"><span style="background-color: #f8e71c; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f"></span></span></span><br />
<div dir="ltr" style="line-height: 1.2; margin-bottom: 0pt; margin-top: 0pt; white-space: normal;">
<span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b"><span style="background-color: #f8e71c; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f"><span id="docs-internal-guid-0d91fc84-7fff-ccb1-3555-46e8e3536246"></span></span></span></span></div>
<span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b"><span style="background-color: #f8e71c; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f">
</span></span></span>
<div dir="ltr" style="line-height: 1.2; margin-bottom: 0pt; margin-top: 0pt; white-space: pre-wrap;">
<span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b"><span style="background-color: #f8e71c; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f"><span style="background-color: #f8e71c; color: black; font-family: &quot;oswald&quot;; font-size: 30pt; font-style: normal; font-variant: normal; font-weight: 400; text-decoration: none; vertical-align: baseline; white-space: pre;"><br /></span>
<span style="background-color: #f8e71c; color: black; font-family: &quot;oswald&quot;; font-size: 30pt; font-style: normal; font-variant: normal; font-weight: 400; text-decoration: none; vertical-align: baseline; white-space: pre;">Teoria di riferimento sulla programmazione dei Socket</span></span></span></span></div>
<span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b"><span style="background-color: #f8e71c; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f">
</span></span></span><br />
<div>
<span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b"><span style="background-color: #f8e71c; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f"></span></span><br />
</span></span></span><br />
<ul style="font-family: Oswald; font-size: 30pt; margin-bottom: 0pt; margin-top: 0pt; white-space: pre-wrap;"><span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b"><span style="background-color: #f8e71c; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f">
<li dir="ltr" style="background-color: transparent; font-family: &quot;Playfair Display&quot;; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline; white-space: pre;"><span id="docs-internal-guid-f81d855e-7fff-f3f1-ca81-8063cbbe7bea"><span style="background-color: transparent; color: #01afd1; font-family: &quot;arial&quot;; font-size: 18pt; vertical-align: baseline; white-space: pre-wrap;"><a href="https://drive.google.com/file/d/1zKHNAoOpIEZeP4KwZ06vHmNy5RWn1Cgk/view" style="text-decoration-line: none;">Introduction to Sockets Programming in C using TCP/IP</a></span></span></li>
</span></span></span></span></span></ul>
<span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b"><span style="background-color: #f8e71c; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f">
<span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f">
</span></span></span></span></span><br />
<div>
<span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b"><span style="background-color: #f8e71c; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f"><br /></span></span></span></span></span></div>
<span id="docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b"><span style="background-color: #f8e71c; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f">
<div>
<span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5"></span><br />
<div dir="ltr" style="line-height: 1.2; margin-bottom: 0pt; margin-top: 0pt;">
</div>
<span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5">
</span>
<br />
<div style="-webkit-text-stroke-width: 0px; background-color: #f8e71c; color: black; font-family: &quot;Times New Roman&quot;; font-size: medium; font-style: normal; font-variant-caps: normal; font-variant-ligatures: normal; font-weight: 400; letter-spacing: normal; orphans: 2; text-align: start; text-decoration-color: initial; text-decoration-style: initial; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px;">
<span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f"></span></span><br /></span>
<br />
<ul style="font-family: Oswald; font-size: 30pt; margin-bottom: 0pt; margin-top: 0pt; white-space: pre-wrap;"></ul>
<span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f">
</span></span></span></div>
<span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5">
</span>
<div dir="ltr" style="line-height: 1.2; margin-bottom: 0pt; margin-top: 0pt;">
<span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5"><span style="background-color: #f8e71c; color: black; font-family: &quot;oswald&quot;; font-size: 30pt; font-style: normal; font-variant: normal; font-weight: 400; text-decoration: none; vertical-align: baseline; white-space: pre;">Il protocollo HTTP</span></span></div>
<span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5">
<ul style="font-family: Oswald; font-size: 30pt; margin-bottom: 0pt; margin-top: 0pt; white-space: pre-wrap;">
<li dir="ltr" style="background-color: transparent; font-family: &quot;Playfair Display&quot;; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline; white-space: pre;"><span id="docs-internal-guid-0cceb814-7fff-57a3-0b9d-62b7cfd0bb73"><a href="http://www-db.deis.unibo.it/courses/TW/PDF/1.03.HTTP.pdf" style="text-decoration-line: none;"><span style="background-color: transparent; color: #01afd1; font-size: 18pt; vertical-align: baseline; white-space: pre-wrap;">http://www-db.deis.unibo.it/courses/TW/PDF/1.03.HTTP.pdf</span></a></span></li>
</ul>
<div>
<span style="font-family: &quot;playfair display&quot;;"><span style="font-size: 24px; white-space: pre;"><br /></span></span></div>
<div>
<div dir="ltr" style="line-height: 1.2; margin-bottom: 0pt; margin-top: 0pt; white-space: pre-wrap;">
<br /></div>
<div>
<span id="docs-internal-guid-4471685a-7fff-71aa-1af4-b4b446d8a387"><span style="font-family: &quot;oswald&quot;; font-size: 30pt; vertical-align: baseline; white-space: pre-wrap;">Presentazione dei dati con l’oggetto canvas di Html5</span></span></div>
<div>
<span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5"></span><br />
<ul style="font-family: Oswald; font-size: 30pt; margin-bottom: 0pt; margin-top: 0pt; white-space: pre-wrap;"><span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5">
<li dir="ltr" style="background-color: transparent; font-family: Arial; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<a href="https://developer.mozilla.org/it/docs/Web/HTML/Canvas" style="text-decoration-line: none;"><span style="background-color: transparent; color: #01afd1; font-family: &quot;playfair display&quot;; font-size: 18pt; vertical-align: baseline; white-space: pre-wrap;">https://developer.mozilla.org/it/docs/Web/HTML/Canvas</span></a><span style="background-color: transparent; font-family: &quot;playfair display&quot;; font-size: 18pt; vertical-align: baseline; white-space: pre-wrap;"> </span></div>
</li>
<li dir="ltr" style="background-color: transparent; font-family: &quot;Playfair Display&quot;; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<a href="https://joshondesign.com/p/books/canvasdeepdive/toc.html" style="text-decoration-line: none;"><span style="background-color: transparent; color: #01afd1; font-size: 18pt; vertical-align: baseline; white-space: pre-wrap;">https://joshondesign.com/p/books/canvasdeepdive/toc.html</span></a><span style="background-color: transparent; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline; white-space: pre-wrap;"> </span></div>
</li>
<li dir="ltr" style="background-color: transparent; font-family: Arial; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<span style="background-color: transparent; font-family: &quot;playfair display&quot;; font-size: 18pt; vertical-align: baseline; white-space: pre-wrap;">Esempio: </span><a href="https://drive.google.com/open?id=1QYk7kx2R4umhw3OOcythF8cExlL2EtvU" style="text-decoration-line: none;"><span style="background-color: transparent; color: #01afd1; font-size: 18pt; vertical-align: baseline; white-space: pre-wrap;">canvas-termometro.html</span></a><span style="background-color: transparent; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline; white-space: pre-wrap;"> </span></div>
</li>
<li dir="ltr" style="background-color: transparent; font-family: Arial; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 16pt; margin-top: 0pt;">
<span style="background-color: transparent; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline; white-space: pre-wrap;">Modificando la riga del precedente file contente “</span><span style="background-color: white; font-family: &quot;courier new&quot;; font-size: 18pt; vertical-align: baseline; white-space: pre-wrap;">var term_val=26;</span><span style="background-color: transparent; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline; white-space: pre-wrap;">“ otteniamo la visualizzazione del valore 26 in formato grafico</span></div>
</li>
</span></ul>
<span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5">
</span>
<br />
<div>
<span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5"><span id="docs-internal-guid-1d459ff9-7fff-2579-14ae-525bb534e381"><span style="font-family: &quot;oswald&quot;; font-size: 30pt; vertical-align: baseline; white-space: pre-wrap;">Modifica del file html</span></span></span></div>
<span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5">
</span>
<div>
<ul style="font-family: Oswald; font-size: 30pt; margin-bottom: 0pt; margin-top: 0pt; white-space: pre-wrap;"><span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5">
<li dir="ltr" style="background-color: transparent; font-family: Arial; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline; white-space: pre;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<span id="docs-internal-guid-d26a4e6e-7fff-7ef5-91ac-0979850c6a31"><span style="background-color: transparent; font-size: 18pt; font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline; white-space: pre-wrap;">Realizzazione di una routine, in grado di trovare la riga del file html contenente il dato di temperatura da visualizzare e modificarla inserendo il nuovo dato</span></span></div>
</li>
</span></ul>
<div>
<span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5"><span style="font-family: &quot;arial&quot;;"><span style="font-size: 24px; white-space: pre-wrap;"><br /></span></span></span></div>
</div>
<span id="docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5">
<div>
<span id="docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846"></span><br />
<div dir="ltr" style="line-height: 1.2; margin-bottom: 0pt; margin-top: 0pt;">
<span id="docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846"><span style="font-family: &quot;oswald&quot;; font-size: 30pt; vertical-align: baseline; white-space: pre-wrap;">Manipolazione del contenuto dei file</span></span></div>
<span id="docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846">
</span>
<br />
<ul style="margin-bottom: 0pt; margin-top: 0pt;"><span id="docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846">
<li dir="ltr" style="background-color: transparent; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<span style="font-family: &quot;arial&quot;;"><span style="font-size: 24px; white-space: pre-wrap;">Realizzazione di una routine, in grado di restituire l’intero contenuto del file sottoforma di stringa 
</span></span></div>
</li>
</span></ul>
<span id="docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846">
</span>
<div>
<span id="docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846"><br /></span></div>
<span id="docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846">
<div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"></span><br />
<div dir="ltr" style="line-height: 1.2; margin-bottom: 0pt; margin-top: 0pt;">
<span style="font-family: &quot;oswald&quot;; font-size: 30pt; vertical-align: baseline; white-space: pre-wrap;"><br /></span>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-family: &quot;oswald&quot;; font-size: 30pt; vertical-align: baseline; white-space: pre-wrap;">Test della comunicazione seriale tramite Uart</span></span></div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705">
</span>
<br />
<div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"></span><br /></span>
<br />
<ul style="margin-bottom: 0pt; margin-top: 0pt;"><span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;">
<li dir="ltr" style="background-color: transparent; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<span style="font-family: &quot;arial&quot;;"><span style="font-size: 24px; white-space: pre-wrap;">Scrivere un semplice programma che visualizzi su console i dati ricevuti tramite porta seriale</span></span></div>
</li>
<li dir="ltr" style="background-color: transparent; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<span style="font-family: &quot;arial&quot;;"><span style="font-size: 24px; white-space: pre-wrap;">Scrivere una routine che letti i dati dalla porta seriale, in polling continuo, li metta a disposizione dell’applicazione principale tramite variabile globale
</span></span></div>
</li>
</span></span></ul>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;">
</span></span>
<br />
<div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><br /></span></span></div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;">
</span></span>
<div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3"></span><br /></span></span>
<div dir="ltr" style="line-height: 1.2; margin-bottom: 0pt; margin-top: 0pt; white-space: pre-wrap;">
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span style="font-family: &quot;oswald&quot;; font-size: 30pt; vertical-align: baseline;"><br /></span>
<span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3"><span style="font-family: &quot;oswald&quot;; font-size: 30pt; vertical-align: baseline;">Realizzazione del server web</span></span></span></span></div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3">
</span>
</span></span><br />
<div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"></span><br /></span>
</span></span><br />
<ul style="margin-bottom: 0pt; margin-top: 0pt;"><span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;">
<li dir="ltr" style="background-color: transparent; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<span style="font-family: &quot;arial&quot;;"><span style="font-size: 24px; white-space: pre-wrap;">Integrare le funzionalità precedentemente implementate e Realizzare un Gateway IOT per la visualizzazione remota dei dati provenienti dai sensori</span></span></div>
</li>
</span></span></span></span></ul>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;">
</span></span>
</span></span><br />
<div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span style="font-family: &quot;arial&quot;;"><span style="font-size: 24px; white-space: pre-wrap;"><br /></span></span>
</span></span></span></span><br />
<div dir="ltr" style="line-height: 1.2; margin-bottom: 0pt; margin-top: 0pt; white-space: pre-wrap;">
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span style="font-family: &quot;oswald&quot;; font-size: 30pt; vertical-align: baseline;"><br /></span>
<span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3"><span style="font-family: &quot;oswald&quot;; font-size: 30pt; vertical-align: baseline;">Repository Github</span></span></span></span></span></span></div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span style="font-family: &quot;arial&quot;;"><span style="font-size: 24px; white-space: pre-wrap;"><span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3" style="font-family: &quot;times new roman&quot;; font-size: small; white-space: normal;"></span></span></span><br /></span></span>
</span></span><br />
<div>
<div style="margin: 0px;">
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"></span></span></span></span></span></div>
<ul style="margin-bottom: 0pt; margin-top: 0pt;"><span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;">
<li dir="ltr" style="background-color: transparent; font-variant-east-asian: normal; font-variant-numeric: normal; list-style-type: disc; vertical-align: baseline;"><div dir="ltr" style="line-height: 1.38; margin-bottom: 0pt; margin-top: 0pt;">
<div style="margin: 0px;">
<a href="https://github.com/filippo-bilardo/gateway-iot.git" style="font-family: arial; font-size: 24px; text-decoration-line: none; white-space: pre-wrap;"><span style="background-color: transparent; color: #01afd1; font-family: &quot;playfair display&quot;; font-size: 18pt; vertical-align: baseline;">https://github.com/filippo-bilardo/gateway-iot.git</span></a></div>
</div>
</li>
</span></span></span></span></span></ul>
</div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span style="font-family: &quot;arial&quot;;"><span style="font-size: 24px; white-space: pre-wrap;"><span id="docs-internal-guid-9b6cff86-7fff-5da2-7f8d-bd90f16f7fff"><span style="background-color: transparent; font-family: &quot;playfair display&quot;; font-size: 18pt; vertical-align: baseline;"> </span></span></span></span></span></span></span></span></div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;">
</span></span></span></span></div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;"><span id="docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3">
</span></span></span></div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705"><span style="font-variant-east-asian: normal; font-variant-numeric: normal; vertical-align: baseline;">
</span></span></div>
<span id="docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705">
</span></div>
</span></div>
<div>
</div>
</span></div>
</div>
</span></div>
</span></span></span></span></span></div>
</div>
</div>
</div>
