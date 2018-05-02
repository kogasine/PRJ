/*
 * LED_ONOFF.cpp
 *
 * Created: 2018-05-02 오전 10:51:57
 * Author : 1234
 */ 
#define  F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD = 0xff;
	PORTD = 0xff;
	int A=0b00000001;
    /* Replace with your application code */
    while (1) 
    {	PORTD=~0x01;    
		for(int i=0;i<8;i++){
			A = A<<1;  
			PORTD = ~A;
			_delay_ms(500);
			
		}
		for(int i=0;i<8;i++){
				A = A>>1;
				PORTD = ~A;
				_delay_ms(500);
		}
		
    }
}

