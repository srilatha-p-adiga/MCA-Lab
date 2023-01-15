/*
  UART0 library for LPC2148
  http://www.electronicwings.com/
*/

#ifndef UART_H
#define UART_H

#include <lpc214x.h>
#include <stdint.h>
void UART0_init(void);
void UART0_TxChar(char ch);
void UART0_SendString(char* str);
unsigned char UART0_RxChar(void);
void UART0_RxString(void);


#endif

