/*programa para calcular
 * el area de un circulo*/                      /*TITULO (COMENTARIO)*/
#include <stdio.h>                              /*ACCESO A ARCHIVO DE BIBLIOTECA*/
#include <stdlib.h>                             /*ACCESO A ARCHIVO DE BIBLOTECA*/

int main(){                                    /*CABECERA DE FUNCION*/
   
    float radio ,area;                         /*DECLARACION DE VARIABLE*/

    printf("Radio = ? ");                       /*INSTRUCION DE SALIDA */

    scanf("%f", &radio);                        /*INSTRUCION DE ENTRADA*/

    area= 3.14159 * radio * radio;             /*INSTRUCIN DE ASIGNACION*/

    printf("Area = %f \n", area);                /*INSTRUCION DE SALIDA*/

  
    return EXIT_SUCCESS;
        

}

