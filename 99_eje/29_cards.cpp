/* 
 * Programa para calcular el número de cartas en el mazo.
 * Este código se distribuye bajo la Licencia Pública Vegas.
 * (C) 2014, El Colegio Equipo de Blackjack
 */
#include <stdio.h>
int main()
{

    int decks;
    puts("Introduzca un número de barajas");
    scanf("%i", &decks);
    if (decks < 1) {
        puts("Eso no es un número válido de barajas");
        return 1;
    }

    printf("Hay %i cartas\n ", (decks * 52));
    return 0;


}
