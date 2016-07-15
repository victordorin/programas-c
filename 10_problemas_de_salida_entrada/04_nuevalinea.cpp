#include <stdio.h>
main(){
char texto[80];

int cont,aux;
for(cont = 0; (texto[cont] = getchar()) != '\n'; ++cont);
aux = cont;
for(cont = 0; cont < aux; ++cont)
    putchar(texto[cont]); 
return 0;



}
