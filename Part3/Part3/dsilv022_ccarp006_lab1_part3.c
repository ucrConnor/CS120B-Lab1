/*
 * Part3.cpp
 *
 * Created: 4/3/2018 7:47:58 PM
 * Author : Connor
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0xFF; PORTB = 0x00;
	unsigned char cntavail = 0x00;
	unsigned char temp = 0x00;
    while (1) 
    {
		temp = PINA; 
		temp = ~temp;
		cntavail = temp & 0x0F;
		if(!cntavail)
			PORTB = 0x80;
		else
			PORTB = cntavail;
    }
}

