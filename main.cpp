#include "Enlace.h"

int main (){
    /*INICIALIZANDO COMPONENTES*/
    UART *prueba;
    prueba = new UART;
    GPIO_init_board();
    prueba->UART_inicializacion();
    ADC_init();


    while(1){




    }



}



