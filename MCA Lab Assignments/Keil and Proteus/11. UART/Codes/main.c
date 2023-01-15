#include "pll.h"
#include "uart.h"
#include <lpc214x.h>

int main()
{
	//char *string_recieve;  //Variable to recieve the string
	char recieve;          //Variable to recieve the character 
   init_pll();
	init_uart0();
	while(1)
	{
		recieve = recieve_char();
		sendString("Received:");
		transmit_char(recieve);
		sendString("\r\n");
		
		/*string_recieve = receive_string();
		receive_string();
		//sendString("String Received:");
		sendString(string_recieve);
		sendString("\r\n");*/
	}
}



