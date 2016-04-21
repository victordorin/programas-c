#include <stdio.h>


int main(void)

{
    char f,m,l;
    int edad;

    printf("Introduce la primera inicial: ");
    scanf(" %c",&f);

    printf("Introduce la segunda inicial: ");
    scanf(" %c", &m);

    printf("Introduce la tercera inicial: ");
    scanf(" %c", &l);

    printf("Introduce la edad: ");
    scanf(" %d", &edad);

    //scanf("%c %c %c %d", &f, &m,&l, &edad);//

    printf("Mi iniciales son: %c,%c,%c y mi edad es %d \n", f, m, l, edad);
    return(0);
}
