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
    int j;
    int mayor;
    int encontrado;
    int legajoAux;
    int edadAux;

    for (i=0 ; i<MAX ; i++)
    {
        printf ("Ingrese un numero de legajo: ");
        scanf ("%d", &legajoAux);

        printf ("Ingrese un salario: ");
        scanf ("%f", &salarioAux);

        printf ("ingrese una edad: ");
        scanf ("%d", &edadAux);

        salario [i] = salarioAux;
        edad [i] = edadAux;
        legajo [i] = legajoAux;

        salario [j] = salarioAux;
        edad [j] = edadAux;
        legajo [j] = legajoAux;

    }
    if (encontrado == 0)
        {
            printf ("registro no encontrado");
        }

        system ("cls");

    printf("\n\nLegajo\tEdad\tSalario");



    for (i=0 ; i<MAX ; i++)
    {
        printf ("\n %d\t%d\t%f \n", legajo[i],edad[i],salario[i]);

        if (i == 0 || salario[i] > mayor)
        {
            mayor = salario [i];
        }

        if (legajoAux == legajo [i])
        {
            printf ("\n %d\t%d\t%f \n", legajo[i],edad[i],salario[i]);
            encontrado = 1;
        }

    }

    for (i=0 ; i< MAX-1 ; i++)
    {
        for (j=i+1 ; j<MAX ; j++)
            {
                if (legajo[i] > legajo [j])
                {
                    legajoAux = legajo [i];
                    legajo [i] = legajo [j];
                    legajo [j] = legajoAux;

                    edadAux = edad [i];
                    edad [i] = edad [j];
                    edad [j] = edadAux;

                    salarioAux = salario [i];
                    salario [i] = salario[j];
                    salario [j] = salarioAux;

                }
            }

    }



        printf ("el salario mayor es %d: ", mayor);


    return 0;
}
