#include "uart.h"
#include <lpc214x.h>

char receive_str[50];

void init_uart0()
{
	PINSEL0=0x05;
	U0LCR = 0x83;
	U0DLL = 0x87;
	U0DLM = 1;
	U0LCR = 0x03;
}
	
void transmit_char(unsigned char c)
{
	U0THR=c;
  while((U0LSR & (1<<6))==0);
}


char recieve_char()
{
	unsigned char temp;
	while((U0LSR & (1<<0))==0);
	temp = U0RBR;
	return temp; 
}

void sendString(char*s)
{ 
  int i=0;
	while(s[i]!='\0')
	{
		transmit_char(s[i]);
		i++;
	}
}
/*
char *receive_string() //A function to receive string on UART0
{
	  int i = 0;
	  while((U0LSR & (1<<0))==0);
		receive_str[i] = recieve_char();
		i++;
    return receive_str;
}*/