#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[50];
    char apellido[50];
    int legajo;
}ePersona;

void mostrarPersona (ePersona);

int main()
{

    ePersona datos [3];
    int i;

    printf ("Datos de las personas:\n\n");

    for (i=0 ; i<3 ; i++)
    {
        mostrarPersona(datos[i]);
    }

    system("cls");

    return 0;
}
    void mostrarPersona (ePersona datos)
    {
        printf ("Datos de la persona: \n\n");
        printf ("El nombre es: %s %s\n", datos.nombre, datos.apellido);
        printf ("El numero de legajo es %d\n",datos.legajo);

    }

      /*for (i=0 ; i<5 ;i++)
    {

    printf ("Ingrese un nombre: ");
    fflush (stdin);
    gets (alumno.nombre);

    printf("Ingrese un apellido: ");
    fflush(stdin);
    gets (alumno.apellido);

    printf("ingrese un numero de legajo: ");
    scanf ("%d", &alumno.legajo);

    }*/

    /*printf("los datos son: %s \n %s \n %d",datos.alumno,datos.apellido,datos.legajo);*/
