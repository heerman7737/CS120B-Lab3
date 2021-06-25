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
    //DDRA = 0x00;PORTA = 0xFF;
    DDRB = 0x06;PORTB = 0xF9;
    DDRD = 0x00;PORTC = 0xFF;

    //unsigned char tmpA1 = 0x00;
    //unsigned char tmpA2 = 0x00;
    unsigned char tmpB = 0x00;
    unsigned char tmpD = 0x00;
    unsigned short weight;
    unsigned char output = 0x00;
    /* Insert your solution below */
    while (1) {
	output =0x00;
	tmpB = PINB & 0x01;
	tmpD = PIND<<1;
	weight = tmpD +tmpB;
	if(weight>=70){
		output  =0x02;
	}
	else if(weight>5){
		output = 0x04;
	}
	else {
		output =0x00;
	}
	if(PIND ==0x80){
		output =0x02;
	}
	PORTB = output;
    }
    return 1;
}
