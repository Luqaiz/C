#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{
    int legajo;
    char nombre[20];
    char apellido[30];
    float promedio;
    eFecha fnac;

}eAlumno;

void mostrarAlumno (eAlumno);
void mostrarCurso (curso, int)

int main ()
{
    /*eAlumno unAlumno;*/
    eAlumno curso [] = {{1111,"Juan","Perez",7,{4,11,1995}},{2222,"Jorge","Suarez",8.5,{12,8,1996}},{3333,"Roberto","Pepazo",8,{4,4,1998}}}; /*= {827,"Juan","Perez",9,{17, 4, 2017}};*/
    int i;

    printf ("Datos de unAlumno:\n\n");
    for (i=0 ; i<3 ; i++)
    {
        mostrarAlumno(curso[i]);
    }

    /*printf("Ingrese un legajo: ");
    scanf ("%d", &unAlumno.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(unAlumno.nombre);

    printf("Ingrese apellido: ");
    fflush(stdin);
    scanf("%s", unAlumno.apellido);

    printf("Ingrese promedio: ");
    scanf("%f", &unAlumno.promedio);

    printf("Ingrese dia de nacimiento: ");
    scanf("%d", &unAlumno.fnac.dia);

    printf("Ingrese mes de nacimiento: ");
    scanf("%d", &unAlumno.fnac.mes);

    printf("Ingrese anio de nacimiento: ");
    scanf("%d", &unAlumno.fnac.anio);


    printf ("Datos de unAlumno:\n\n");
    mostrarAlumno(unAlumno);*/

    /*unAlumno.legajo = 827;
    strcpy(unAlumno.nombre, "Juan");
    strcpy(unAlumno.apellido, "Perez");
    unAlumno.promedio = 7;*/



    return (0);
}

void mostrarAlumno (eAlumno alumno)
{
    printf("Datos del alumno\n\n");
    printf("Legajo: %d\n" ,alumno.legajo);
    printf("Nombre %s %s\n" ,alumno.nombre, alumno.apellido);
    printf("Promedio: %.2f\n", alumno.promedio);
    printf("Fecha Nacimiento: %d/%d/%d\n\n", alumno.fnac.dia, alumno.fnac.mes, alumno.fnac.anio);
}

void mostrarCurso (curso[3], int cantidad)
{
    int i;

    for (i=0 ; i<cantidad ; i++)
    {
        mostrarAlumno(curso[i]);
    }
}
