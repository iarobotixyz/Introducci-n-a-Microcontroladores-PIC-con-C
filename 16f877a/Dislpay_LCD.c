#include <16F877A.h>
#fuses HS,NOWDT,NOPROTECT,NOLVP
#device (ADC=10)  //configuro la resolucion del convertidor Analogico digital a 10 bits
#use delay(clock=20000000)
#include "libreriaLCD.c" // llamo al driver del LCD
   long m,n;      // variables las cuales obtengo de las lecturas del convertidor ADC
   int a,b,c,d,e,f,dd,aa; // variables declaradas, para poder separar el valor arrojado por m y n,
                        // para poder mostrarlos en el display, digito por digito, en codigo ASCII
   void display(long k, long l)
   { // funcion creada para mostrar los valores en el display LCD, 
                                 //y no tener que escribir esto enla funcion principal "main"
   c=48+k%10;              // dado que los numero en codigo ASCII comenzan en 48, a partir de ahi sumo
   k=k/10;
   b=48+k%10;
   k=k/10;
   a=48+k%10;
   k=k/10;
   aa=48+k%10;
   
   f=48+l%10;
   l=l/10;
   e=48+l%10;
   l=l/10;
   d=48+l%10;
   l=l/10;
   dd=48+l%10;
   
   lcd_putc("\fValor 1:");
   lcd_putc(aa);
   lcd_putc(a);
   lcd_putc(b);
   lcd_putc(c);

   lcd_putc("\nValor 2:");
   lcd_putc(dd);
   lcd_putc(d);
   lcd_putc(e);
   lcd_putc(f);
   }
void main() 
{
   setup_adc_ports(ALL_ANALOG);     //configuro el converdidor ADC
   setup_adc(ADC_CLOCK_INTERNAL);
   lcd_init();       // inicializo el display LCD
   for(;;)
   { 
      set_adc_channel(0);  //leo del convertidor
      delay_us(100);
      m=read_adc();
      
      set_adc_channel(1);
      delay_us(100);
      n=read_adc();
      delay_ms(100);

      display(m,n);  //mando a graficar los valores
   }
}