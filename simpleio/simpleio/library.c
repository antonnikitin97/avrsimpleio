/*
 * simpleio.c
 *
 * Created: 12/11/2016 17:20:23
 * Author : Anton
 */ 

#include <avr/io.h>


/* Replace with your library code */

void setPortInput(char port){
	switch(port){
		case 'A':
		case 'a':
			DDRA = 0x00;
			break;
		case 'B':
		case 'b':
			DDRA = 0x00;
			break;
		case 'C':
		case 'c':
			DDRA = 0x00;
			break;
	}
}

void setPINSInRestOut(char port, uint8_t PINToSetIN[]){
	
}

void enableAllPullUpsPort(char port){
	switch(port){
		case 'A':
		case 'a':
			PORTA = 0xFF;
			break;
		case 'B':
		case 'b':
			PORTB = 0xFF;
			break;
		case 'C':
		case 'c':
			PORTC = 0xFF;
			break;
	}
}

void enableAllTriStatePort(char port){
	switch(port){
		case 'A':
		case 'a':
			PORTA = 0x00;
			break;
		case 'B':
		case 'b':
			PORTB = 0x00;
			break;
		case 'C':
		case 'c':
			PORTC = 0x00;
			break;
	}
}


