#include <18F2550.h>
#fuses INTRC_IO, NOMCLR
#use delay (internal=8M)
void main()
{
   while (true){
   output_high(PIN_B0);
   delay_ms(1000);
   output_low(PIN_B0);
   delay_ms(1000);
   }
}
