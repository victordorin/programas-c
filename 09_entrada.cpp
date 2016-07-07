#include <stdio.h>
#include <ctype.h>

main ()
{
    char letras[80];
    int cont, auxiliar;
    /*ler la linia*/
     for (cont = 0; (letras[cont] = getchar()) != '\n'; ++cont);
     /*apuntar al contador de caracteres*/
     auxiliar = cont;
     /* escribir la linea en mayuscula+*/
     for (cont = 0; cont < auxiliar;  ++cont)
         putchar(toupper(letras[cont]));
return 0;
}
