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
    int dni;
    char nombre [40];
    float peso;
    eFecha fnac;

}ePersona;

void mostrarDatos (ePersona[],int);
void mostrarDato (ePersona);
void ordenarLista (ePersona listaPersonas[], int tam);
void cargarDatos (ePersona personitas [],int);


int main()
{
    //ePersona unaPersona = {30000, "Juan", 85}; (PRIMER METODO DE CARGA DE DATOS)

    /*ePersona unaPersona;
    unaPersona.dni = 30000;
    strcpy (unaPersona.nombre, "Juan");
    unaPersona.peso = 85; (SEGUNDO METODO DE CARGA DE DATOS)*/

    /*ePersona unaPersona ;
    ePersona otraPersona ;

    unaPersona = cargaDatos(unaPersona);
    otraPersona = unaPersona;

    mostrarDatos(unaPersona);
    mostrarDatos(otraPersona);*/

    ePersona listaPersonas [3];

    cargarDatos(listaPersonas,3);

    mostrarDatos(listaPersonas,3);

    ordenarLista(listaPersonas,3);

    mostrarDatos(listaPersonas,3);


    return 0;
}

void cargarDatos (ePersona personitas [], int tam)
{
    for (int i=0; i<3;i++)
    {
        printf ("Ingrese su DNI: ");
        scanf ("%d", &personitas[i].dni);

        printf ("Ingrese su Nombre: ");
        fflush(stdin);
        gets(personitas[i].nombre);

        printf ("Ingrese su Peso: ");
        scanf ("%f", &personitas[i].peso);

        printf ("Ingrese Dia de Nacimiento: ");
        scanf ("%d", &personitas[i].fnac.dia);

        printf ("Ingrese Mes de Nacimiento: ");
        scanf ("%d", &personitas[i].fnac.mes);

        printf ("Ingrese Anio de Nacimiento: ");
        scanf ("%d", &personitas[i].fnac.anio);
    }
}
void mostrarDato (ePersona personita)
{

    printf ("%d\t%s\t%.2f\t%d\t%d\t%d\n", personita.dni, personita.nombre, personita.peso,personita.fnac.dia,personita.fnac.mes,personita.fnac.anio);

}

void mostrarDatos(ePersona personitas[], int tam)
{
    int i;

    printf ("----------------------\n");
    printf ("DNI\tNOMBRE\tPESO\tDIA\tMES\tANIO\n\n");

   for (i=0; i<tam; i++)
   {
       mostrarDato(personitas[i]);
   }
    printf ("----------------------\n");
}

void ordenarLista (ePersona listaPersonas[], int tam)
{
    ePersona aux;

    for (int i=0; i<tam-1;i++)
    {
        for (int j=i+1;j<tam;j++)
        {
            if(strcmp(listaPersonas[i].nombre,listaPersonas[j].nombre)>0)
            {
                aux = listaPersonas[i];
                listaPersonas[i] = listaPersonas[j];
                listaPersonas[j] = aux;
            }
            if (strcmp(listaPersonas[i].nombre,listaPersonas[j].nombre)==0)
            {
                if(listaPersonas[i].dni>listaPersonas[j].dni)
                {
                    aux = listaPersonas[i];
                    listaPersonas[i] = listaPersonas[j];
                    listaPersonas[j] = aux;
                }
            }
        }
    }
}

/*ePersona cargaDatos (ePersona personita)
{
    printf ("Ingrese su DNI: ");
    scanf ("%d", &personita.dni);

    printf ("Ingrese su Nombre: ");
    fflush(stdin);
    gets(personita.nombre);
    //scanf ("%[^\n]", unaPersona.nombre);

    printf ("Ingrese su Peso: ");
    scanf ("%f", &personita.peso);

    return personita;
}

void mostrarDatos (ePersona personita)
{
    printf ("----------------------\n");
    printf ("DNI\tNOMBRE\tPESO\n\n");
    printf ("%d\t%s\t%.2f\n", personita.dni, personita.nombre, personita.peso);
    printf ("----------------------\n");
}*/
