#include <stdio.h>
#include <stdlib.h>

int main(){


    int saldo;
    int  mes, anio;
    
  const  char *MES[12] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septembre","Octubre","Noviembre","Diciembrie"};


    printf("¿Cuanto dinero tienes ?\n");
    printf("yo=<cantidad>\n");


    scanf(" yo=%i", &saldo);
    printf("Saldo: %i\n", saldo);

    printf("Fecha de nacimiento (dd/mm/aa): ");
    scanf(" %*i/%i/%i", &mes, &anio);
//el * es el caracter de supersion de asignacio.
    printf("Naciste en %s de %i .\n", MES[mes-1], anio);



    return EXIT_SUCCESS;
}
