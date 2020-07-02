#include <12F675.h>
#fuses INTRC_IO, NOMCLR
#use delay (internal=8M)
void main()
{
   while (true){
   output_high(PIN_A0);
   delay_ms(1000);
   output_low(PIN_A0);
   delay_ms(1000);
   
   output_high(PIN_A1);
   delay_ms(1000);
   output_low(PIN_A1);
   delay_ms(1000);
   
   output_high(PIN_A4);
   delay_ms(1000);
   output_low(PIN_A4);
   delay_ms(1000);
}

}
