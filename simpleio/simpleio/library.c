/*
 * A wrapper library made for the AVR micrcontroller simplifying intefacing with the avr/io library
 * In making this full awareness is given to the existence of such a library already but it is hoped that any programmer using this
 * will find it a lot easier to work with the GPIO and hence be able to focus more on their programming.
 *
 * Anton.
 */ 

#include <avr/io.h>

/* Replace with your library code */

void setPortMode(char port, char mode){
    switch(convertToLower(port)){
        case 'a':
            if(convertToLower(mode) == 'o') {
                DDRA = 0xFF;
            } else {
                DDRA = 0x00;
            }
            break;
        case 'b':
            if(convertToLower(mode) == 'o') {
                DDRB = 0xFF;
            } else {
                DDRB = 0x00;
            }
        case 'c':
            if(convertToLower(mode) == 'o') {
                DDRC = 0xFF;
            } else {
                DDRC = 0x00;
            }
        case 'd':
            if(convertToLower(mode) == 'o') {
                DDRD = 0xFF;
            } else {
                DDRD = 0x00;
            }
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
        case 'd':
            DDRD &= ~(1 << pinNumber);
            break;
    }
}

void setPinOutput(char port, uint8_t pinNumber){
    switch(convertToLower(port)){
        case 'a':
            DDRA |= (1 << pinNumber);
            break;
        case 'b':
            DDRB |= ~(1 << pinNumber);
            break;
        case 'c':
            DDRC |= ~(1 << pinNumber);
            break;
        case 'd':
            DDRD &= ~(1 << pinNumber);
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
        case 'd':
            PORTD = 0xFF;
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
        case 'd':
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