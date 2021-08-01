#ifndef __UART_H__
#define __UART_H__
#include<avr/io.h>

void InitUART(uint16_t ubrr);

char UARTread();

void UARTwrite(char data);

#endif
