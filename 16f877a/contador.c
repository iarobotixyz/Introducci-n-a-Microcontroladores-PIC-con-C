#include <16F877A.h>
#fuses HS, NOWDT, NOPROTECT // palabra de configuracion
#use delay(clock=20000000)
#use rs232(baud=9600, xmit = PIN_C6, rcv=PIN_C7) //puerto serial, velodidad de transmision, pin de transmision, pin de recepcion
void main()   
{
   setup_timer_0(rtcc_ext_h_to_l | rtcc_div_1);//se configura el timer 0 , leera en flancos de bajada, y cada pulso incrementara en 1 el contador 1, 2, 4, 8, 16
   set_timer0(0); //inicializamos el contador en algun valor deseado
   for(;;)
    {
      while(get_timer0()<10)
      {  // optenemos en tiempo real el valor del contador
      }
      set_timer0(0);
      output_high(PIN_B7);
      delay_ms(1000);
      output_low(PIN_B7);
    }
}
