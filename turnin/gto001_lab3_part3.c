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
   // DDRB = 0x00;PORTB = 0xFF;
    DDRC = 0xFF;PORTC = 0x00;

    unsigned char tmpA = 0x00;
    //unsigned char tmpB = 0x00;
    unsigned char tmpC = 0x00;
    unsigned char seatbelt;
    /* Insert your solution below */
    while (1) {
	tmpA = PINA & 0x0F;
	//tmpB = PINB;
		
	if(tmpA == 0x00){
		tmpC = 0x40;
	}
	else if(tmpA == 1 ||tmpA == 2){
		tmpC = 0x60;
	}
	else if(tmpA == 3 || tmpA == 4){
		tmpC = 0x70;
	}
	else if(tmpA == 5 || tmpA == 6){
		tmpC = 0x38;
	}
	else if(tmpA == 7 || tmpA ==8 ||tmpA ==9){
		tmpC = 0x3C;
	}
	else if(tmpA == 10 || tmpA ==11 ||tmpA ==12){
		tmpC = 0x3E;
	}
	else if(tmpA ==13 ||tmpA ==14 ||tmpA ==15){
		tmpC = 0x3F;
	}
	else if(tmpA==0x83){
		tmpC = 112;
	}
	seatbelt = PINA & 0x70;
	if(seatbelt== 0x30){
		tmpC = tmpC|0x80; 
	}
	PORTC = tmpC;
    }
    return 1;
}
