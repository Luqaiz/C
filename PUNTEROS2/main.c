#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char modelo [20];
    int nucleos;
}eProcesador;

typedef struct
{
    char marca [20];
    eProcesador procesador;
    int ram;
    float precio;
}eNotebook ;

void mostrarNotbook (eNotebook );

void mostrarVector (int*[] ,int);

int main()
{
    int* vec [5];

    cargarVector (vec,5);

    mostrarVector (vec,5);
    return 0;
}

void cargarVector (int x[], int tam)
{
    printf ("Ingrese cinco numeros: \n");
    for (int i=0; i<5; i++)
    {
        scanf ("%d", (x+i));
    }

}
void mostrarVector (int* x[] ,int tam)
{
    printf ("- El vector es -\n");
    for (int i=0; i<tam; i++)
    {
        printf ("\n%d\n", *(x + i));
    }
}

void mostrarNotbook (eNotebook listaN)
{
    printf ("%s\t%d\t%f\t%s\t%d\n", lista.)
}
