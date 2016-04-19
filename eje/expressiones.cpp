#include <stdio.h>
int main(void)
{

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int result;

    printf("Introduce el valor para a: ");
    scanf(" %i",&a);
   
    printf("Introduce el valor para b: ");
    scanf(" %i",&b);
    
    printf("Introduce el valor para c: ");
    scanf(" %i",&c);
    
    printf("Introduce el valor para d: ");
    scanf(" %i",&d);
    result = a - b;
    printf("a - b = %i\n", result);

    result = a * b;
    printf("a * b = %i\n", result);


    result = a / c;
    printf("a / c = %i\n", result);

    result = a + b * c; 
    printf("a + b * c = %i\n", result);

    printf("a * b + c * d = %i\n", a * b + c * d);


    return(0);
}
