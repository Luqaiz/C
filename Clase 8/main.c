#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validarFuncion (char cadena [],int tam);
void mostrarNombres (char matriz[][20],int tam);
void mostrarNombre (char nombre[]);
void ordenarNombres (char matriz[][20],int tam);


int main()
{
    char matrizNombres [5][20];
    char buffer [100];
    int i;

    for (i=0; i<5; i++)
    {
        printf ("Ingrese un nombre: ");
        fflush (stdin);
        gets (buffer);
        while (!validarFuncion(buffer,19))
        {
            printf("Error: Se ha excedido de caracteres, reingrese. ");
            gets (buffer);

        }
        strcpy (matrizNombres[i],buffer);

    }

    mostrarNombres(matrizNombres, 5);

    ordenarNombres(matrizNombres, 5);

    mostrarNombres(matrizNombres, 5);

}

int validarFuncion (char cadena [],int tam)
{
    int esValido = 0;

    if (strlen(cadena) < tam)
    {
        esValido = 1;
    }

    return esValido;

}

void mostrarNombres (char matriz[][20],int tam)
{
    int i;
    printf ("   Los nombres son: \n");
    printf("    ------------- \n");

    for (i=0; i<tam; i++)
    {
         mostrarNombre(matriz[i]);
    }
    printf("    ------------- \n");
}

void mostrarNombre (char nombre[])
{
    printf ("\t%s\n", nombre);
}

void ordenarNombres (char matriz[][20],int tam)
{
    int i;
    int j;
    char buffer [20];
    for (i=0; i<tam-1;i++)
    {
        for (j = i+1 ; j<tam;j++)
        {
            if (strcmp(matriz[i], matriz[j]) >0 )
            {
                strcpy(buffer,matriz[i]);
                strcpy(matriz[i],matriz[j]);
                strcpy(matriz[j],buffer);
            }
        }
    }
}



