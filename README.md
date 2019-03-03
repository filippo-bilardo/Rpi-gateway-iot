<div style="background-color: white; box-sizing: border-box; color: #24292e; font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Helvetica, Arial, sans-serif, &quot;Apple Color Emoji&quot;, &quot;Segoe UI Emoji&quot;, &quot;Segoe UI Symbol&quot;; font-size: 16px; margin-bottom: 16px;">
<span id="user-content-docs-internal-guid-6274c343-7fff-bcf0-e543-20d4f532ee6e" style="box-sizing: border-box;"><span style="box-sizing: border-box;"><span style="box-sizing: border-box;">Comunicazione con i Socket -&nbsp;</span></span><span style="box-sizing: border-box;"><span style="box-sizing: border-box;">Gateway IOT</span></span></span></div>
<ul style="background-color: white; box-sizing: border-box; color: #24292e; font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Helvetica, Arial, sans-serif, &quot;Apple Color Emoji&quot;, &quot;Segoe UI Emoji&quot;, &quot;Segoe UI Symbol&quot;; font-size: 16px; margin-bottom: 16px; margin-top: 0px; padding-left: 2em;">
<li dir="ltr" style="box-sizing: border-box;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;">Realizzazione di un Gateway IOT per la visualizzazione remota dei dati provenienti dai sensori.</span></div>
</li>
<li dir="ltr" style="box-sizing: border-box; margin-top: 0.25em;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;">Il dato di temperatura arriva tramite collegamento seriale con il microcontrollore che gestisce il sensore di temperatura.</span></div>
</li>
<li dir="ltr" style="box-sizing: border-box; margin-top: 0.25em;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;">I dati ricevuti verranno inseriti all’interno di una pagina web, che utilizzerà un oggetto canvas di html5 per la rappresentazione grafica del dato.</span></div>
</li>
<li dir="ltr" style="box-sizing: border-box; margin-top: 0.25em;"><span style="box-sizing: border-box;">il server risponderà a richieste http provenienti da client remoti trasmettendo il file html contenente il dato aggiornato</span></li>
</ul>
<div style="background-color: white; box-sizing: border-box; color: #24292e; font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Helvetica, Arial, sans-serif, &quot;Apple Color Emoji&quot;, &quot;Segoe UI Emoji&quot;, &quot;Segoe UI Symbol&quot;; font-size: 16px;">
<br /></div>
<div style="background-color: white; box-sizing: border-box; margin-bottom: 0px;">
<div dir="ltr" style="box-sizing: border-box; color: #24292e; font-size: 16px;">
<span id="user-content-docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b" style="box-sizing: border-box;">Obiettivi didattici</span></div>
<div style="box-sizing: border-box;">
<ul style="box-sizing: border-box; color: #24292e; font-size: 16px; margin-bottom: 16px; margin-top: 0px; padding-left: 2em;"><span id="user-content-docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b" style="box-sizing: border-box;"><span style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f" style="box-sizing: border-box;">
<li dir="ltr" style="box-sizing: border-box;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;">saper programmare con i socket in C</span></div>
</li>
<li dir="ltr" style="box-sizing: border-box; margin-top: 0.25em;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;">saper utilizzare le librerie sui socket</span></div>
</li>
<li dir="ltr" style="box-sizing: border-box; margin-top: 0.25em;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;">saper utilizzare le librerie per l’utilizzo dell’uart</span></div>
</li>
<li dir="ltr" style="box-sizing: border-box; margin-top: 0.25em;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;">saper utilizzare le librerie per l’accesso al’hardware GPIO della Raspberry PI</span></div>
</li>
<li dir="ltr" style="box-sizing: border-box; margin-top: 0.25em;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;">saper utilizzare le librerie per l’utilizzo dei file</span></div>
</li>
<li dir="ltr" style="box-sizing: border-box; margin-top: 0.25em;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;">eseguire semplici operazioni sui file</span></div>
</li>
<li dir="ltr" style="box-sizing: border-box; margin-top: 0.25em;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;">implementare un semplice protocollo di comunicazione tra la raspberry e il microcontrollore</span></div>
</li>
</span></span></span></ul>
<div style="color: #24292e; font-size: 16px;">
<br /></div>
<div style="box-sizing: border-box;">
<div dir="ltr" style="box-sizing: border-box; color: #24292e; font-size: 16px;">
<span id="user-content-docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b" style="box-sizing: border-box;"><span style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f" style="box-sizing: border-box;"><span style="box-sizing: border-box;">Teoria di riferimento sulla programmazione dei Socket</span></span></span></span></div>
<div style="box-sizing: border-box;">
<ul style="box-sizing: border-box; color: #24292e; font-size: 16px; margin-bottom: 16px; margin-top: 0px; padding-left: 2em;"><span id="user-content-docs-internal-guid-98243406-7fff-c38b-5461-56f7278a607b" style="box-sizing: border-box;"><span style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f" style="box-sizing: border-box;"><span style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-f64bbc88-7fff-07f5-c880-3b08c465c76f" style="box-sizing: border-box;">
<li dir="ltr" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-f81d855e-7fff-f3f1-ca81-8063cbbe7bea" style="box-sizing: border-box;"><span style="box-sizing: border-box;"><a href="https://drive.google.com/file/d/1zKHNAoOpIEZeP4KwZ06vHmNy5RWn1Cgk/view" rel="nofollow" style="background-color: transparent; box-sizing: border-box; color: #0366d6; text-decoration-line: none;">Introduction to Sockets Programming in C using TCP/IP</a></span></span></li>
</span></span></span></span></span></ul>
<div dir="ltr" style="box-sizing: border-box; color: #24292e; font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Helvetica, Arial, sans-serif, &quot;Apple Color Emoji&quot;, &quot;Segoe UI Emoji&quot;, &quot;Segoe UI Symbol&quot;; font-size: 16px;">
<span style="box-sizing: border-box;"><br /></span></div>
<div dir="ltr" style="box-sizing: border-box; color: #24292e; font-family: -apple-system, BlinkMacSystemFont, &quot;Segoe UI&quot;, Helvetica, Arial, sans-serif, &quot;Apple Color Emoji&quot;, &quot;Segoe UI Emoji&quot;, &quot;Segoe UI Symbol&quot;; font-size: 16px;">
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;">Il protocollo HTTP</span></div>
<ul style="box-sizing: border-box; color: #24292e; font-size: 16px; margin-bottom: 16px; margin-top: 0px; padding-left: 2em;">
<li dir="ltr" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-0cceb814-7fff-57a3-0b9d-62b7cfd0bb73" style="box-sizing: border-box;"><a href="http://www-db.deis.unibo.it/courses/TW/PDF/1.03.HTTP.pdf" rel="nofollow" style="background-color: transparent; box-sizing: border-box; color: #0366d6; text-decoration-line: none;">http://www-db.deis.unibo.it/courses/TW/PDF/1.03.HTTP.pdf</a></span></li>
</ul>
<div style="box-sizing: border-box; color: #24292e; font-size: 16px;">
<span style="box-sizing: border-box;"><br style="box-sizing: border-box;" /></span></div>
<div style="color: #24292e; font-size: 16px;">
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box; font-family: , &quot;blinkmacsystemfont&quot; , &quot;segoe ui&quot; , &quot;helvetica&quot; , &quot;arial&quot; , sans-serif , &quot;apple color emoji&quot; , &quot;segoe ui emoji&quot; , &quot;segoe ui symbol&quot;;"></span></div>
<div style="box-sizing: border-box;">
<div dir="ltr" style="box-sizing: border-box; color: #24292e; font-size: 16px;">
Presentazione dei dati con l’oggetto canvas di Html5</div>
<div style="box-sizing: border-box;">
<span style="color: #24292e;"><span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"></span></span><br />
<ul style="box-sizing: border-box; color: #24292e; font-size: 16px; margin-bottom: 16px; margin-top: 0px; padding-left: 2em;"><span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;">
<li dir="ltr" style="box-sizing: border-box;"><div dir="ltr" style="box-sizing: border-box;">
<a href="https://developer.mozilla.org/it/docs/Web/HTML/Canvas" rel="nofollow" style="background-color: transparent; box-sizing: border-box; color: #0366d6; text-decoration: none;"><span style="box-sizing: border-box;">https://developer.mozilla.org/it/docs/Web/HTML/Canvas</span></a><span style="box-sizing: border-box;"></span></div>
</li>
<li dir="ltr" style="box-sizing: border-box; margin-top: 0.25em;"><div dir="ltr" style="box-sizing: border-box;">
<a href="https://joshondesign.com/p/books/canvasdeepdive/toc.html" rel="nofollow" style="background-color: transparent; box-sizing: border-box; color: #0366d6; text-decoration: none;"><span style="box-sizing: border-box;">https://joshondesign.com/p/books/canvasdeepdive/toc.html</span></a><span style="box-sizing: border-box;"></span></div>
</li>
<li dir="ltr" style="box-sizing: border-box; margin-top: 0.25em;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;">Esempio:&nbsp;</span><a href="https://drive.google.com/open?id=1QYk7kx2R4umhw3OOcythF8cExlL2EtvU" rel="nofollow" style="background-color: transparent; box-sizing: border-box; color: #0366d6; text-decoration: none;"><span style="box-sizing: border-box;">canvas-termometro.html</span></a><span style="box-sizing: border-box;"></span></div>
</li>
<li dir="ltr" style="box-sizing: border-box; margin-top: 0.25em;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;">Modificando la riga del precedente file contente “</span><span style="box-sizing: border-box;">var term_val=26;</span><span style="box-sizing: border-box;">“ otteniamo la visualizzazione del valore 26 in formato grafico</span></div>
</li>
</span></ul>
<span style="color: #24292e;"><span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"></span></span><br style="box-sizing: border-box;" />
<div style="box-sizing: border-box; color: #24292e; font-size: 16px;">
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-1d459ff9-7fff-2579-14ae-525bb534e381" style="box-sizing: border-box;"><span style="box-sizing: border-box;">Modifica del file html</span></span></span></div>
<span style="color: #24292e;"><span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"></span></span><br />
<div style="box-sizing: border-box; color: #24292e; font-size: 16px;">
<ul style="box-sizing: border-box; margin-bottom: 16px; margin-top: 0px; padding-left: 2em;"><span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;">
<li dir="ltr" style="box-sizing: border-box;"><div dir="ltr" style="box-sizing: border-box;">
<span id="user-content-docs-internal-guid-d26a4e6e-7fff-7ef5-91ac-0979850c6a31" style="box-sizing: border-box;"><span style="box-sizing: border-box;">Realizzazione di una routine, in grado di trovare la riga del file html contenente il dato di temperatura da visualizzare e modificarla inserendo il nuovo dato</span></span></div>
</li>
</span></ul>
<div style="box-sizing: border-box;">
<br /></div>
</div>
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"></span><br />
<div style="box-sizing: border-box;">
<div dir="ltr" style="box-sizing: border-box; color: #24292e; font-size: 16px;">
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846" style="box-sizing: border-box;"><span style="box-sizing: border-box;">Manipolazione del contenuto dei file</span></span></span></div>
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span style="color: #24292e;"><span id="user-content-docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846" style="box-sizing: border-box;"></span></span></span><br />
<ul style="box-sizing: border-box; color: #24292e; font-size: 16px; margin-bottom: 16px; margin-top: 0px; padding-left: 2em;"><span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846" style="box-sizing: border-box;">
<li dir="ltr" style="box-sizing: border-box;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;"><span style="box-sizing: border-box;">Realizzazione di una routine, in grado di restituire l’intero contenuto del file sottoforma di stringa</span></span></div>
</li>
</span></span></ul>
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span style="color: #24292e;"><span id="user-content-docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846" style="box-sizing: border-box;"></span></span></span><br />
<div style="box-sizing: border-box; color: #24292e; font-size: 16px;">
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846" style="box-sizing: border-box;"><br style="box-sizing: border-box;" /></span></span></div>
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846" style="box-sizing: border-box;"></span></span><br />
<div style="box-sizing: border-box;">
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846" style="box-sizing: border-box;"><span style="color: #24292e;"><span id="user-content-docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705" style="box-sizing: border-box;"></span></span></span></span><br />
<div dir="ltr" style="box-sizing: border-box; color: #24292e; font-size: 16px;">
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705" style="box-sizing: border-box;"><span style="box-sizing: border-box;">Test della comunicazione seriale tramite Uart</span></span></span></span></div>
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846" style="box-sizing: border-box;"><span style="color: #24292e;"><span id="user-content-docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705" style="box-sizing: border-box;"></span></span></span></span><br />
<div style="box-sizing: border-box;">
<ul style="box-sizing: border-box; color: #24292e; font-size: 16px; margin-bottom: 16px; margin-top: 0px; padding-left: 2em;"><span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705" style="box-sizing: border-box;"><span style="box-sizing: border-box;">
<li dir="ltr" style="box-sizing: border-box;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;"><span style="box-sizing: border-box;">Scrivere un semplice programma che visualizzi su console i dati ricevuti tramite porta seriale</span></span></div>
</li>
<li dir="ltr" style="box-sizing: border-box; margin-top: 0.25em;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;"><span style="box-sizing: border-box;">Scrivere una routine che letti i dati dalla porta seriale, in polling continuo, li metta a disposizione dell’applicazione principale tramite variabile globale</span></span></div>
</li>
</span></span></span></span></ul>
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705" style="box-sizing: border-box; color: #24292e; font-size: 16px;"><span style="box-sizing: border-box;"></span></span><br style="box-sizing: border-box;" /></span></span>
<div style="box-sizing: border-box; color: #24292e; font-size: 16px;">
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846" style="box-sizing: border-box;">Realizzazione del server web</span></span></div>
<div style="box-sizing: border-box;">
<div style="box-sizing: border-box;">
<ul style="box-sizing: border-box; color: #24292e; font-size: 16px; margin-bottom: 16px; margin-top: 0px; padding-left: 2em;"><span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-cd149ce6-7fff-eb3f-069e-b8dfc544e846" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705" style="box-sizing: border-box;"><span style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3" style="box-sizing: border-box;"><span style="box-sizing: border-box;">
<li dir="ltr" style="box-sizing: border-box;"><div dir="ltr" style="box-sizing: border-box;">
<span style="box-sizing: border-box;"><span style="box-sizing: border-box;">Integrare le funzionalità precedentemente implementate e Realizzare un Gateway IOT per la visualizzazione remota dei dati provenienti dai sensori</span></span></div>
</li>
</span></span></span></span></span></span></ul>
<div style="box-sizing: border-box;">
<div dir="ltr" style="box-sizing: border-box; color: #24292e; font-size: 16px;">
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705" style="box-sizing: border-box;"><span style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3" style="box-sizing: border-box;"><span style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3" style="box-sizing: border-box;"><span style="box-sizing: border-box;">Repository Github</span></span></span></span></span></span></span></div>
<div style="box-sizing: border-box;">
<ul style="box-sizing: border-box; color: #24292e; font-size: 16px; margin-bottom: 16px; margin-top: 0px; padding-left: 2em;"><span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-6e4204c6-7fff-ccc3-93ea-1a5104fb7705" style="box-sizing: border-box;"><span style="box-sizing: border-box;"><span id="user-content-docs-internal-guid-f6a5cc90-7fff-76f7-f728-1f983a97eac3" style="box-sizing: border-box;"><span style="box-sizing: border-box;"><span style="box-sizing: border-box;">
<li dir="ltr" style="box-sizing: border-box;"><div dir="ltr" style="box-sizing: border-box;">
<div style="box-sizing: border-box;">
<span style="background-color: transparent; box-sizing: border-box; color: #0366d6; text-decoration: none;"><a href="https://github.com/filippo-bilardo/gateway-iot.git" style="background-color: transparent; box-sizing: border-box; color: #0366d6; text-decoration: none;">https://github.com/filippo-bilardo/gateway-iot.git</a></span></div>
</div>
</li>
</span></span></span></span></span></span></ul>
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span style="color: #24292e;"><br /></span></span></div>
<div style="box-sizing: border-box;">
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;"><span style="color: #24292e;"><br /></span></span></div>
</div>
</div>
</div>
</div>
</div>
<span id="user-content-docs-internal-guid-352185c5-7fff-277e-694f-8d4c024338c5" style="box-sizing: border-box;">
</span></div>
</div>
</div>
</div>
</div>
</div>
</div>
