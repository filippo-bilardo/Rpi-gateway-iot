c99 -c lib_led.c -l bcm2835 -o led.o  
c99 led.o -l bcm2835 lib_led_test.c -o led_test

c99 -c lib_file.c -o file.o
c99 file.o lib_file_test.c -o file_test

c99 -c lib_uart.c -o uart.o
c99 file.o led.o -l bcm2835 uart.o lib_uart_test.c -o uart_test

c99 -c socket10_MyLib.c -o socket.o
c99 file.o led.o -l bcm2835 uart.o socket.o socket10_server.c -o server
c99 file.o led.o -l bcm2835 uart.o socket.o socket10_client.c -o client


