/*
 * A wrapper library made for the AVR micrcontroller simplifying intefacing with the avr/io library
 * In making this full awareness is given to the existence of such a library already but it is hoped that any programmer using this
 * will find it a lot easier to work with the GPIO and hence be able to focus more on their programming.
 *
 * Anton.
 */ 

#include <avr/io.h>

/* Replace with your library code */

void setPortInput(char port){
	switch(convertToLower(port)){
		case 'a':
			DDRA = 0x00;
			break;
		case 'b':
			DDRA = 0x00;
			break;
		case 'c':
			DDRA = 0x00;
			break;
	}
}

void setPinInput(char port, uint8_t pinNumber){
    switch(convertToLower(port)){
        case 'a':
            DDRA &= ~(1 << pinNumber);
            break;
        case 'b':
            DDRB &= ~(1 << pinNumber);
            break;
        case 'c':
            DDRC &= ~(1 << pinNumber);
            break;
    }
}

void enableAllPullUpsPort(char port){
	switch(convertToLower(port)){
		case 'a':
			PORTA = 0xFF;
			break;
		case 'b':
			PORTB = 0xFF;
			break;
		case 'c':
			PORTC = 0xFF;
			break;
	}
}

void enableAllTriStatePort(char port){
	switch(convertToLower(port)){
		case 'a':
			PORTA = 0x00;
			break;
		case 'b':
			PORTB = 0x00;
			break;
		case 'c':
			PORTC = 0x00;
			break;
	}
}

char convertToLower(char input){
    if(input >= 97 && input <= 122) {
        return input;
    }else{
        return input + 32;
    }
}