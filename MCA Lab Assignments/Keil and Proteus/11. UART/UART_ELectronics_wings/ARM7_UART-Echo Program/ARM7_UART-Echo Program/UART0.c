/*
  UART0 in LPC2148(ARM7)
  http://www.electronicwings.com/arm7/lpc2148-uart0
*/

#include <lpc214x.h>
#include <stdint.h>
#include "UART.h"

int main(void)
{
	char *string_recieved;
	char receive;
	UART0_init();
	while(1)
	{
		/*receive = UART0_RxChar();
		UART0_SendString("Received:");
		UART0_TxChar(receive);
		UART0_SendString("\r\n");
		*/
		string_recieved = UART0_RxString();
		UART0_RxString();
		UART0_SendString("Received:");
    UART0_SendString(string_recieved);
		UART0_SendString("\r\n");
	}
}