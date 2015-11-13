#include <stdio.h>
#include <stdlib.h>
    int main(){
        int dia;
        printf("que numero de dia de la semana es ?");
        scanf("%i",&dia);
        switch(dia) {
            case 1 :
                printf("Lun, Lunes\n");
                break;
            case 2 :
                printf("Mar, Martes\n");
                break;
            case 3 :
                printf("Mier, Miercoles\n");
                break;
            case 4 :
                printf("Jue, Jueves\n");
                break;
            case 5 :
                printf("Vie, Viernes\n");
                break;
            case 6 :
                printf("Sab, Sabado\n");
                break;
            case 7 :
                printf("Dom, Domingo\n");
                break;
            default :
                printf("No existe\n");

        }



    return EXIT_SUCCESS;
        

}

