#include <16f877a.h>
#fuses HS,NOWDT,NOPROTECT,NOLVP
#use delay(clock=20M)
void main()
{
   while (true){
   output_high(PIN_D2);
   delay_ms(1000);
   output_low(PIN_D2);
   delay_ms(1000);
   }
}
