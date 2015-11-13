#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pf;
        fp = fopen ( "fichero.in", "r" );
    if (fp==NULL) {fputs ("File error",stderr); exit (1);}
    fclose ( fp );

    return 0;


}

