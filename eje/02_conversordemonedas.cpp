#include <stdio.h>
#include <stdlib.h>

int main()
{

    double euros;
    double dolares;

    printf("Introduzca cantidad en dolares: ");
    scanf("%lf", &dolares);

    euros = dolares * 0.7;

    printf("%lf dolares son %lf euros. \n", dolares, euros);


    return EXIT_SUCCESS;


}

