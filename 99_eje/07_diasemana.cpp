#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    printf("Introduzca numero del 1 al 7: ");
    scanf("%d",&i);

    switch(i){
        case 1:
             printf("Lunes\n");
             break;

        case 2:
             printf("Martes\n");
             break;

        case 3:
             printf("Miercoles\n");
             break;

        case 4:
             printf("Jueves\n");
             break;

        case 5:
             printf("Viernes\n");
             break;

        case 6:
             printf("Sabado\n");
             break;

        case 7:
             printf("Domingo\n");
             break;
        default:
             printf("Opcion no valido\n");
             break;

    }
    return 0;
}
