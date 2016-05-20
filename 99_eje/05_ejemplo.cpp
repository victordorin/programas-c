/*Programa ciora*/
#include <stdio.h>


main()
{
    float a;

    printf("Introduzca un numero ");


    scanf(" %f", &a);

    if(a==0){
        printf("Operacion no permitida \n");
        return 0;
    }

    if (a/(int)a!=1.)
    {
         printf("Numero introducido no es entero \n");


          printf("La parte entera del numero es: %i \n",(int) a);
          printf("La parte no entera es: %f \n", a-(int)a);
    }
    else{
        printf("Felicidades has introducido un numero entero \n");
    }

            


    return 0;


}
