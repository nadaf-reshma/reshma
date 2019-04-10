
#include <avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>

int main(void)
{

    // Insert code
    TCCR1A|=((1<<COM1A1)|(1<<WGM10)|(1<<WGM11));
     TCCR1B|=((1<<WGM12) | (1<<CS11) | (1<<CS10));
    //TCCR1B|=(1<< CS10);
     //| (1<<CS12)| (1<< CS10);
    //TCNT1=0x00;
    //OCR0A=200;
    DDRD|=(1<<PB1); //bit from where u want to generate value.
    TCNT1=0X00;
    while(1)
    {
        //DO NOTHING
         OCR1A=100;  //actual comapre values
         _delay_ms(100);
         OCR1A=250; //actual comapre values
         _delay_ms( 100);
         OCR1A=500; //actual comapre values
         _delay_ms(100);
         OCR1A=1500; //actual comapre values
         _delay_ms(100);
         OCR1A=3000; //actual comapre values
         _delay_ms(100);
    }


    return 0;
}

