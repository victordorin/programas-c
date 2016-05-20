#include <stdio.h>
#include <stdlib.h>

int divisor(int n){
    if (n == 0)
        return 0;
    return n / divisor(n-1);
}
int main(int argc, const char **argv){
    printf("El divisor  de 7 es: %i\n", divisor(7.6));
    return EXIT_SUCCESS;
}
