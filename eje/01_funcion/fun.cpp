/* Inclusion de archivos */
#include <stdio.h>

#include <stdlib.h>
void holamundo()/*Funcion donde se ejecuta la logica del programa*/
{
    printf("Hola Mundo\n");/*imprime ls cadena */
    return;/*sales de la funcion */

}
int main()/* Funcion principal del programa */
{
    holamundo();/*llamada a la funcion holamundo */
    return EXIT_SUCCESS; /*sale del programa con codigo 0 (correcto) */
}
