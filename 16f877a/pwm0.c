#include <16F877A.h>
#fuses HS, NOWDT, NOPROTECT // palabra de configuracion
#use delay(clock=20000000)
#use rs232(baud=9600, xmit = PIN_C6, rcv=PIN_C7) //puerto serial, velodidad de transmision, pin de transmision, pin de recepcion
#define REF1 500
#define REF2 500


void main(){
//               mode=prescalador , periodo , postescalador
   setup_timer_2(T2_DIV_BY_1, 1023, 1);
   setup_ccp1(CCP_PWM);


   setup_timer_2(T2_DIV_BY_1, 1023, 1);
   setup_ccp2(CCP_PWM);

   
// fija ciclo de trabajo 
   set_pwm1_duty (REF1);   

// fija ciclo de trabajo 
   set_pwm2_duty (REF2);




}
