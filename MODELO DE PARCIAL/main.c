#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include "funciones.h"
#define MAX 5
#define MAX2 10
#define MAX3 15
int main()
{
    eCliente listaCliente [MAX];
    eAlquiler listaAlquiler [MAX2];
    eAlquila listaAlquila [MAX3];

    char seguir = 's';
    int opcion=0;

    iniciarEstructura(listaCliente,MAX);
    iniciarEstructuraAlquiler(listaAlquiler,MAX2);

     while(seguir=='s')
     {
         printf ("1-Agregar Cliente\n");
         printf ("2-Modifcar Cliente\n");
         printf ("3-Baja Cliente\n");
         printf ("4-Nuevo Alquiler\n");
         printf ("5-Fin Alquiler\n");
         printf ("6-Informar\n");
         printf ("7-Salir\n");

         scanf("%d",&opcion);

         switch (opcion)
         {
            case 1:
                system("cls");
                altaCliente(listaCliente,MAX);
                system("pause");
                system("cls");
                break;
            case 2:
                system("cls");
                modificarCliente(listaCliente,MAX);
                system("pause");
                system("cls");
                break;
            case 3:
                system("cls");
                bajaCliente(listaCliente,MAX);
                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");
                nuevoAlquiler(listaCliente,MAX,listaAlquiler,MAX2,listaAlquila,MAX3);
                system("pause");
                system("cls");
                break;
            case 5:
                system("cls");
                finalizarAlquiler(listaCliente,MAX,listaAlquiler,MAX2,listaAlquila,MAX3);
                system("pause");
                system("cls");
                break;
            case 6:
                mostrarPersonas(listaCliente,MAX);
                break;
            case 7:
                seguir = 'n';
                break;
         }
     }
     return 0;

}
