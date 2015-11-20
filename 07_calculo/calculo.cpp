#include <stdio.h>
#include <stdlib.h>

int main(){


    FILE *pf;

    pf = fopen("calculo.txt","r+");

    fprintf(pf,"2\n""235\n");

    fclose(pf);

    return EXIT_SUCCESS;
        

}

