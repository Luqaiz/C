#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char respuesta;
    int cantidadPar = 0;
    int cantidadImpar = 0;
    int acumuladorImpar = 0;
    float contador = 0;
    float sumaNumeros = 0;
    float promedio;
    int numMax;

        do
        {
            printf ("Ingrese un numero: ");
            scanf ("%d", &numero);
                while (numero < 0)
                {
                    printf ("ingrese un numero positivo: ");
                    scanf ("%d", &numero);
                }
            if (numero > 0)
            {
                sumaNumeros = sumaNumeros + numero;
            }
            if (numero%2 == 0)
                {
                    cantidadPar++;
                }
                else
                    {
                        cantidadImpar++;
                        acumuladorImpar = acumuladorImpar + numero;
                    }
            if (contador == 0)
            {
                numMax = numero;
            }
            else
            {
                if (numero > numMax)
                    numMax = numero;
            }


            contador++;
            printf ("desea contiunar?" );
            fflush (stdin);
            scanf ("%c", &respuesta);
        }while (respuesta != 'n');


    promedio = sumaNumeros / contador;

    printf ("la cantidad de numeros par es %d \n", cantidadPar);
    printf ("la cantidad de numeros impar es %d \n", cantidadImpar);
    printf ("la sumatoria de los numeros impar es %d \n", acumuladorImpar);
    printf ("el promedio de todos los numeros es %.2f \n", promedio);
    printf ("el numero maximo es %d \n", numMax);

