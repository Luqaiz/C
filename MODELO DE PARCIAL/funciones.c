#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "funciones.h"

int buscarPorId(eCliente lista[], int id,int tam)
{
    int i;
    int flag=-1;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1 && lista[i].id==id)
        {
            flag=i;
            break;
        }
    }
    return flag;
}

int buscarEquipo(eAlquila listaAlquila[],int equipo,int tam)
{
    int flag=-1;
    for(int i=0; i<tam; i++)
    {
        if(listaAlquila[i].equipo==equipo&&listaAlquila[i].estado==1)
        {
            flag=i;
            break;
        }
    }
    return flag;
}

int obtenerEspacioLibre(eCliente lista[],int tam)
 {

    int i;
    int flag=-1;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==0)
        {
            flag=i;
            break;
        }
    }
    return flag;

}
int obtenerAlquilerLibre(eAlquiler lista[],int tam)
 {

    int i;
    int flag=-1;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==0)
        {
            flag=i;
            break;
        }
    }
    return flag;

}

void altaCliente (eCliente lista[], int tam)
{
    eCliente nuevoCliente;
    int lugar;
    int existe;
    int id;

    lugar = obtenerEspacioLibre(lista,tam);

    if (lugar==-1)
    {
        printf ("ERROR, NO HAY ESPACIO LIBRE");
        getch ();
    }
    else
    {
        printf ("Ingrese el id: ");
        scanf("%d", &id);

        existe =  buscarPorId(lista,id,tam);

        if (existe != -1)
        {
            printf ("ERROR, Ya existe este id.");
            getch();
        }else
        {
            lista[existe].id=existe+1;
            nuevoCliente.id=id;

            printf ("Ingrese el dni: ");
            scanf("%d", &nuevoCliente.dni);

            printf ("Ingrese un nombre: ");
            fflush(stdin);
            gets (nuevoCliente.nombre);

            printf ("Ingrese el apellido: ");
            fflush(stdin);
            gets (nuevoCliente.apellido);

            nuevoCliente.estado = 1;
            lista[lugar]=nuevoCliente;
        }

    }

}

void modificarCliente (eCliente lista[], int tam)

{
    int id;
    int aux;
    char respuesta;

    printf ("Ingrese el id para modificar: ");
    scanf ("%d", &id);

    aux=buscarPorId(lista,id,tam);

    if (aux != -1)
    {
        mostrarCliente(lista[aux]);
        printf ("Desea modificar al cliente?\n");

        respuesta = getche();
        if (respuesta == 's')
        {
            printf ("\n");
            printf ("Ingrese un nuevo Nombre: ");
            fflush(stdin);
            gets (lista[aux].nombre);

            printf("Ingrese un nuevo Apellido:  ");
            fflush(stdin);
            gets (lista[aux].apellido);
        }else
           {
               printf("Accion CANCELADA, no se modifico el alumno \n");
            }
    }

}

void mostrarCliente(eCliente lista)
{
   printf("%d\t%d\t%s\t%s\n",lista.id,lista.dni,lista.nombre,lista.apellido);
}

void estructuraCero (eCliente lista[], int i)
{
    strcpy(lista[i].nombre,"\0");
    strcpy(lista[i].apellido,"\0");
    lista[i].estado=0;
    lista[i].dni=0;
    lista[i].id=0;
}

void iniciarEstructura (eCliente lista[],int tam)
{
    int i ;
    for (i=0; i<tam; i++)
    {
        estructuraCero(lista,i);
    }
}
void estructuraCeroAlquiler (eAlquiler listaAlquiler[], int i)
{
   listaAlquiler[i].equipo=0;
   listaAlquiler[i].estado=0;
   listaAlquiler[i].tiempo=0;
   listaAlquiler[i].tiemporeal=0;
   strcpy(listaAlquiler[i].operador, "\0");
}
void iniciarEstructuraAlquiler(eAlquiler listaAlquiler[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        estructuraCeroAlquiler(listaAlquiler,i);
    }
}
void bajaCliente (eCliente lista[], int tam)
{
    char respuesta;
    int aux;
    int id;

    printf("Ingrese id para dar de baja\n");
    scanf ("%d", &id);
    aux=buscarPorId(lista,id,tam);

    if(aux!=-1)
    {
        mostrarCliente(lista[aux]);
        printf("\nDesea eliminar este cliente: s/n\n");
        fflush(stdin);
        respuesta=getche();
        if(respuesta=='s')
        {
            estructuraCero(lista,aux);
            printf("\nSe ha inhabilitado a este cliente\n");
            system("pause");

        }
        if(respuesta=='n')
        {
            printf("Accion cancelada.\n");
            system("pause");
        }
    }
    else
    {
        printf("\nNo se ha encontrado el id.");
        system("pause");
    }
}

void nuevoAlquiler (eCliente listaCliente[], int tamCliente, eAlquiler listaAlquiler[],int tamAlquiler, eAlquila listaAlquila[], int tamAlquila)
{
    eAlquiler auxAlquiler;
    eCliente auxCliente;
    eAlquila auxAlquila;
    int lugar ;
    int esta;
    int id;
    int equipo;

    lugar=obtenerAlquilerLibre(listaAlquiler,tamAlquiler);

    if (lugar == -1)
    {
        printf ("No hay espacio en el sistema de alquileres.");
    }else
    {
        printf ("Ingrese el ID del cliente que alquila");
        scanf ("%d", &id);

        esta = buscarPorId(listaCliente,id,tamCliente);
        if (esta == -1)
        {
            printf ("No existe este cliente.");
        }else
        {
            printf("\n1-AMOLADORA\n2-MEZCLADORA\n3-TALADRO\n\nIngrese numero de equipo: ");
            scanf("%d",&equipo);
            if(equipo==1 || equipo==2 || equipo==3)
            {
                auxAlquiler.equipo=equipo;
                printf ("Ingrese tiempo de alquiler");
                scanf ("%d", &auxAlquiler.tiempo);
                printf ("Ingrese el operador");
                fflush(stdin);
                gets(auxAlquiler.operador);
                auxCliente.estado=1;
                auxAlquiler.estado=1;
                auxAlquila.equipo=auxAlquiler.equipo;
                auxAlquila.id=auxAlquiler.equipo;
                auxAlquila.estado=1;

                listaAlquila[lugar]=auxAlquila;
                listaAlquiler[lugar]=auxAlquiler;
                listaCliente[lugar]=auxCliente;
            }else
            {
                printf ("OPCION INVALIDA.");
            }
        }
    }
}

void finalizarAlquiler (eCliente listaCliente[], int tamCliente, eAlquiler listaAlquiler[],int tamAlquiler, eAlquila listaAlquila[], int tamAlquila)
{
    eAlquila auxAlquila;
    eAlquiler auxAlquiler;
    int id;
    int indice;
    int equipo;
    int equipoIndice;

    printf("\nIngrese el ID del cliente que dejara de alquilar: ");
    scanf("%d",&id);

    indice=buscarPorId(listaCliente,id,tamCliente);

    if(indice!=-1)
    {
        printf("\n1-AMOLADORA\n2-MEZCLADORA\n3-TALADRO\n\nIngrese numero de equipo a finalizar alquiler: ");
        scanf("%d",&equipo);
        if(equipo==1 || equipo==2 || equipo==3)
        {
            equipoIndice=buscarEquipo(listaAlquila,equipo,tamAlquila);
            if(equipoIndice!=-1)
            {
                auxAlquila.estado=0;
                printf("\nTiempo alquilado: ");
                scanf("%d",&auxAlquiler.tiemporeal);
                printf("\nAlquiler FINALIZADO\n\n");
            }
            else
            {
                printf("\nNo ah sido alquilado!\n");
            }
        }
        else
        {
            printf("OPCION INVALIDA!!\n\n");
        }

    }
    else
    {
        printf("\nID no encontrada.\n");
    }
}

void mostrarPersonas (eCliente lista[],int tam)
{

    int i;
    int flag=0;

     printf ("DNI\tNOMBRE\tEDAD\n");
     printf ("-----------------------\n");
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            mostrarCliente(lista[i]);
            flag=1;
        }

    }
     printf ("-----------------------\n");
    if(flag==0)
    {
        printf("\nNo hay datos cargados en el sistema\n");
    }
}

void muestraTodo(eCliente listaCliente[], eAlquila listaAlquila[], int tamCliente, int tamAlquila)
{
    int aux[tamCliente];
    int i;
    int j;

    for(i=0;i<tamCliente;i++)
    {
        aux[i]=0;
    }

    for(i=0;i<tamCliente;i++)
    {
            for(j=0;j<tamAlquila;j++)
            {
                if(listaCliente[i].id==listaAlquila[j].id)
                    {
                        aux[i]=aux+1;
                    }
            }
    }

}
