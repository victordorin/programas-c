#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
int main()
{

    int x, x1, x2, y, y1, y2, z, z1,z2;

    system("clear");

    printf("\tPROGRAMA QUE CALCULA EL CUADRADO Y EL CUBO DE 3 NUMEROS\n\n");
    printf("Introduzca el primer numero\n");
    scanf("%d", &x);


    printf("Introduzca el segundo numero\n");
    scanf("%d", &y);


    printf("Introduzca el tercer numero\n");
    scanf("%d", &z);

    x1=x*x;
    x2=x*x*x;
    y1=y*y;
    y2=y*y*y;
    z1=z*z;
    z2=z*z*z;
    printf("*****************************\n");
    printf("**%d****%d*****%d***\n",x,x1,x2);
    printf("**%d****%d*****%d***\n",y,y1,y2);

    printf("**%d****%d*****%d***\n",z,z1,z2);

    printf("*****************************\n");
    getch();
    return 0;






}
