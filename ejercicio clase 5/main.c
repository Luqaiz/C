#include <stdio.h>
#include <stdlib.h>
#define MAX 3


int main()
{
    int legajo [MAX];
    float salario [MAX];
    float salarioAux;
    int edad [MAX];
    int i;

    for (i=0 ; i<MAX ; i++)
    {
        printf ("Ingrese un numero de legajo: ");
        scanf ("%d", &legajo[i]);

        printf ("Ingrese un salario: ");
        scanf ("%f", &salarioAux);

        printf ("ingrese una edad: ");
        scanf ("%d", &edad[i]);

        salario [i] = salarioAux;

    }
        system ("cls");

    printf("\n\n Legajo\tEdad\tSalario");



    for (i=0 ; i<MAX ; i++)
    {
        printf ("\n %d\t%d\t%f \n", legajo[i],edad[i],salario[i]);
    }
    return 0;
}
