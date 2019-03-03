//==========================================================================================
//
// Project:  lib_uart
// Date:     25/02/19
// Author:   Filippo Bilardo
//
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//  Uart function
// 
// Ver   Date       Comment
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// 1.0   25/02/19   Versione iniziale
// 
//==========================================================================================
//------------------------------------------------------------------------------------------
//=== Constants ============================================================================
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
//=== Function prototypes ==================================================================
//------------------------------------------------------------------------------------------
int Usart0_Init();
void Usart0_Tx(int uart0_filestream);
void Usart0_Rx(int uart0_filestream);
void Usart0_Close(int uart0_filestream);
int Usart0_main();
