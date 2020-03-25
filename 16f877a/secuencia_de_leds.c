#include <16F877A.h >
#fuses HS, NOWDT, NOPROTECT // palabra de configuracion
#use delay(clock=20000000)
#use rs232(baud=9600, xmit = PIN_C6, rcv=PIN_C7) //puerto serial, velodidad de transmision, pin de transmision, pin de recepcion
int i,j;
void main()
{
   i=128;  
   for(;;)
   {
   // descomentar la parte que se quiere probar, y comentar el resto
   //--------------------------- encendiendo y apagando leds individualmente
   /*
      output_high(PIN_B7);
      delay_ms(100);
      output_low(PIN_B7);
      delay_ms(100);
      output_high(PIN_B6);
      delay_ms(100);
      output_low(PIN_B6);
      delay_ms(100);
      output_high(PIN_B5);
      delay_ms(100);
      output_low(PIN_B5);
      delay_ms(100);
      output_high(PIN_B4);
      delay_ms(100);
      output_low(PIN_B4);
      delay_ms(100);
      output_high(PIN_B3);
      delay_ms(100);
      output_low(PIN_B3);
      delay_ms(100);
      output_high(PIN_B2);
      delay_ms(100);
      output_low(PIN_B2);
      delay_ms(100);
      output_high(PIN_B1);
      delay_ms(100);
      output_low(PIN_B1);
      delay_ms(100);
      output_high(PIN_B0);
      delay_ms(100);
      output_low(PIN_B0);
      delay_ms(100);
      */
      //------------------------ encenciendo y apagando al mismo tiempo
      /*
      output_B(0b10000000);
      delay_ms(100);
      output_B(0b01000000);
      delay_ms(100);
      output_B(0b00100000);
      delay_ms(100);
      output_B(0b00010000);
      delay_ms(100);
      output_B(0b00000100);
      delay_ms(100);
      output_B(0b00000010);
      delay_ms(100);
      output_B(0b00000001);
      delay_ms(100);
      */
      //------------------------- similar al de arriba pero en decimal
      /*
      output_B(128);
      delay_ms(100);
      output_B(64);
      delay_ms(100);
      output_B(32);
      delay_ms(100);
      output_B(16);
      delay_ms(100);
      output_B(8);
      delay_ms(100);
      output_B(4);
      delay_ms(100);
      output_B(2);
      delay_ms(100);
      output_B(1);
      delay_ms(100);
      */
     //-----------Donde va decrementando el valor de i, cuando llega a 1 regresa al valor inicial
      output_B(i);
      i=i/2;
      delay_ms(100);
      if(i==1)
      i=128;
      //--------------------------
   }
}
