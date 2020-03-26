//este programa varia la velocidad de un motor al variar un potencionetro
#include <16F877A.h>
#fuses HS, NOWDT, NOPROTECT // palabra de configuracion
#device (ADC=10)
#use delay(clock=20000000)

void main(){

  setup_adc_ports(ALL_ANALOG);
  setup_adc(ADC_CLOCK_INTERNAL);
   
   setup_timer_2(T2_DIV_BY_1, 1023, 1);
   setup_ccp1(CCP_PWM);
   
  for (;;){
   set_adc_channel(0);
   delay_us(100);
   set_pwm1_duty(read_adc());
  }
  
}
