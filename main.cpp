#include "Enlace.h"

int x=0;
int main (){
    /*INICIALIZANDO COMPONENTES*/
    UART *prueba;
    prueba = new UART;
    HVAC_InicialiceIO();
    prueba->UART_inicializacion();
    ADC_init();

    while(1){




    }

}
void apagado(void){
    P1->OUT &= ~0x01;
    while(1);
}

void encendido(void){
    P1->OUT |= 0x01;
    while(1);
}
void PORT1_IRQHandler ( void )
{
 if(x==0){
     x=1;
     apagado();
 }
 else if(x==1){
     x=0;
     encendido();
 }
}


