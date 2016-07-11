#include <stdio.h>
main()  /*ejemplo de programa interactivo*/
{
    char nombre[20];

    float nota1, nota2, nota3, media;

    printf("Por favor introduce tu nombre:  ");
    /*Introduce tu nombre*/
    scanf(" %[^\n]", nombre);
    printf("Por favor introduce la primera nota: ");
    /*Itroducir nota 1*/
    scanf("%f", &nota1);
    printf("Por favor introduce la segunda nota: ");
    /*Introducir la nota2*/
    scanf("%f", &nota2);
    printf("Por favor introduce la tercera nota: ");
    /*Introducir nota3*/
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;
    /*Calcular la media*/
    printf("\n\nNombre: %-s\n\n", nombre);/* Escribir la salida*/
    printf("Nota 1: %-5.1f\n", nota1);
    printf("Nota 2: %-5.1f\n", nota2);
    printf("Nota 3: %-5.1f\n\n", nota3);
    printf("Media: %-5.1f\n\n", media);








}
