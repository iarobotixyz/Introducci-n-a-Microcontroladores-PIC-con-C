#include <12F683.h>
#fuses INTRC_IO, NOMCLR
#use delay (internal=8M)
void main()
{
   while (true){
   output_high(PIN_A2);
   delay_ms(1000);
   output_low(PIN_A2);
   delay_ms(1000);
   }
}
