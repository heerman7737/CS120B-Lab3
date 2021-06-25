/*	Author: Giang To lab
 *  Partner(s) Name: none
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00;PORTA = 0xFF;
    DDRB = 0xFF;PORTB = 0x00;
    DDRC = 0xFF;PORTC = 0x00;

    unsigned char tmpA1 = 0x00;
    unsigned char tmpA2 = 0x00;
    //unsigned char tmpB = 0x00;
    //unsigned char tmpC = 0x00;
    //unsigned char seatbelt;
    /* Insert your solution below */
    while (1) {
	tmpA1 = PINA & 0xF0;
	tmpA2 = PINA & 0x0F;	

	PORTC = tmpA2<<4;
	PORTB = tmpA1>>4;
    }
    return 1;
}
