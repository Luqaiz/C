#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre [20];
    char apellido [20];
    char apellidoNombre [100];
    char buffer [1000];
    char aux;

    printf ("Ingrese un nombre: ");
    gets (buffer);
    while(strlen(buffer)>19 || strlen(buffer)<3)
    {
        printf ("ERROR! Reingrese un nombre: ");
        gets (buffer);
    }

    //printf ("Ingrese un apellido: ");
    //gets (apellido);

    strcpy(nombre,buffer);
    aux=nombre[0];
    aux= toupper(aux);
    nombre[0]=aux;

    printf ("Ingrese un apellido: ");
    gets (buffer);

    while(strlen(buffer)>19 || strlen(buffer)<3)
    {
        printf ("ERROR! Reingrese un apellido: ");
        gets (buffer);
    }

    strcpy(apellido,buffer);
    aux=apellido[0];
    aux= toupper(aux);
    apellido[0]=aux;

    strcat(apellidoNombre, nombre);
    strcat(apellidoNombre, " ");
    strcat(apellidoNombre, apellido);

    printf ("El nombre y apellido son: %s", apellidoNombre);


    return 0;
}
