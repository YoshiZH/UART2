#include "Enlace.h"

int main (){

    UART *prueba;
    prueba = new UART;
    prueba->UART_inicializacion();
    int i;
    char c[]={"Hola mundo"};
    while(1){
        prueba->UART_sPrintf(UART_1, c);


        for(i=0;i<1000000;i++);
    }



}



