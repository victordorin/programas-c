#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     int i;

     printf("Introduzca numero 1 al 4: ");

     scanf("%d",&i);

     if(i!=4)
     {

         printf("Es primo. \n");
     }
     else
     {
         printf("No es primo. \n");
     }
return 0;

}
