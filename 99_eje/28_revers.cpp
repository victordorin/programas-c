#include <stdio.h>
#include <stdlib.h>

int main(){
  int origen,destino = 0;
  printf("Numero: ");
  scanf(" %i", &origen);

do {  destino *= 10;
  destino += origen % 10;// operacion acumular preguntar si esta vacia 
  origen /= 10;
      } while ( origen != 0 );

  printf("%i\n",destino);


    return EXIT_SUCCESS;
        

}

