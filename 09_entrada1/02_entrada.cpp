#include <stdio.h>
main()
{
    char concepto[20];
    int no_partida;
    float coste;


    scanf("%s %d %f", concepto, &no_partida, &coste);
    printf("%s %d %f \n", concepto, no_partida, coste);
    return 0;
}
