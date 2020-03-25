#include <16F877A.h>
#fuses HS, NOWDT, NOPROTECT // palabra de configuracion
#use delay(clock=20000000)
#use rs232(baud=9600, xmit = PIN_C6, rcv=PIN_C7) //puerto serial, velodidad de transmision, pin de transmision, pin de recepcion
void main()
{
   for(;;)
   {
     /*// prende solo cuando aprieta
      while(input(PIN_D7))
      output_high(PIN_B7);
      output_low(PIN_B7);
      */// prender o apaga cuando aprieta
     while(!input(PIN_D7))
     {
     }
     if(input(PIN_D7))
     {
     output_high(PIN_B7);
     delay_ms(100);
     }
     while(!input(PIN_D7))
     {
     }
     if(input(PIN_D7))
     {
     output_low(PIN_B7);
     delay_ms(100);
     }
   }
}