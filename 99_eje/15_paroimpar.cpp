#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    printf("Introduzca numero: ");

    scanf("%d",&i);

    if(i%2==0){
        printf("Es par. \n");
            }
    else
    {
        printf("Es impar. \n");

    }
    return 0;
}
