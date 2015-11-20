#include <stdio.h>
#include <stdlib.h>

int primerNumero = 234;    /* Nuestras variables */
int segundoNumero = 567;
int suma;

int main(){
    suma = primerNumero + segundoNumero;

    printf("El primer número es %d, el segundo %d y su suma %d.\n",
            primerNumero, segundoNumero, suma);


return EXIT_SUCCESS;
}
