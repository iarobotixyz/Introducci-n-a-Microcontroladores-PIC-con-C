#include <16F877A.h>
#fuses HS, NOWDT, NOPROTECT // palabra de configuracion
#device (ADC=10)
#use delay(clock=20000000)
long A, B;
void main()
{ 
   setup_adc_ports(ALL_ANALOG); // sAN0|sAN1 solo sirve para la familia de pics 16f88X
   setup_adc(ADC_CLOCK_INTERNAL);
   for(;;)
   {
      set_adc_channel(0);
      delay_us(100);
      A=read_adc();
      set_adc_channel(1);
      delay_us(100);
      B=read_adc(100);
      if(A>B)
      output_high(PIN_B7);
      else
      output_low(PIN_B7);  
   }
}
