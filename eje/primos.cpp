#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
  if (n == 0)
             return 1;
      return n * factorial(n-1);
}

int main(int argc, const char **argv){
    printf("El valor de retorno es: %i\n", factorial(5));
    return EXIT_SUCCESS;
}
