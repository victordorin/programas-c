#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 12345;
    float x = 345.678;

     printf("%3d %5d %8d %2d\n\n", i, i, i, i);

   printf("%3e %10f %13f\n\n", x, x, x);
   printf("%3e %13e %16e\n", x, x, x);


    return EXIT_SUCCESS;
        

}

