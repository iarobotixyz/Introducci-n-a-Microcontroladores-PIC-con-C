#include <16F887.h>
#fuses INTRC_IO, NOMCLR
#use delay (internal=8M)
void main()
{
   while (true){
   output_high(PIN_D2);
   delay_ms(1000);
   output_low(PIN_D2);
   delay_ms(1000);
   }
}
