//use this preprocessor macro to define the clockspeed of ATMEGA
//the clock speed can be adjusted by setting the LOW Fuse Byte (0xFF)
//and using a 16MHz crystal with two 22pF ceramic capacitors
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

//basic blink program that drives to LEDs on PORTB0 and PORTB1
int main(void)
{
	//DDRB=Data Direction Register, 0=input, 1=output
	DDRB=0b00000001;
	while (1)
	{
		//check if PINB==1 if yes, light the led at PORTB0
		if(PINB&0b00000010)
			PORTB=0b00000001;
		else
			PORTB=0b00000000;
	}
}
