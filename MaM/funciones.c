#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void mostrarAlumnosConMaterias(eAlumno listaAlumno[], eMateria listaMateria[], eInscripcion listaInscripcion[], int tamAlumno, int tamMateria, int tamInscripcion)

{
    printf ("Nombres y Materias \n");
    printf ("-------------------\n");
    for (int i = 0; i<tamAlumno;i++)
    {
        printf ("%s\n\n", listaAlumno[i].nombre);
        for (int j = 0; j<tamInscripcion;j++)
        {
            if (listaAlumno[i].legajo==listaInscripcion[j].legajo)
            {
                for (int k = 0; k<tamMateria;k++)
                {
                    if (listaInscripcion[j].idMateria==listaMateria[k].id)
                    {
                        printf ("\t%s\n", listaMateria[k].descripcion);
                    }
                }

            }
        }
    }
}

void mostrarMateriasConCantidadDeInscriptos (eMateria listaMateria[],eInscripcion listaInscripcion[],int tamMateria,int tamInscripcion)
{
    int contMat= 0;
    int contProg = 0;
    int contQuim = 0;
    int contFis = 0;
    int contElec = 0;

        for(int i= 0; i<tamInscripcion; i++)
        {
            if (listaInscripcion[i].idMateria==1)
            {
                contProg++;
            }
            if (listaInscripcion[i].idMateria==2)
            {
                contMat++;
            }
            if (listaInscripcion[i].idMateria==3)
            {
                contQuim++;
            }
            if (listaInscripcion[i].idMateria==4)
            {
                contFis++;
            }
            if (listaInscripcion[i].idMateria==5)
            {
                contElec++;
            }

        }
    printf ("Programacion: %d\nMatematica: %d\nQuimica: %d\nFisica: %d\nElectronica: %d\n", contProg,contMat,contQuim,contFis,contElec);
}

void maximoInscriptos(eInscripcion listaInscripcion[], int tamInscripcion, eMateria listaMateria[], int tamMateria)
{

}
