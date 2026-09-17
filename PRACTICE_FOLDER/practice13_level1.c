#include <stdio.h>
#define TAM 8

void llenarArray(int array[], int tamano);
void mostrarArray(int array[], int tamano);
void depurarYlimpiar(int array[], int tamano);
void ordenarInvertido(int array[], int tamano);
void reporteEstadistico(int array[], int tamano);
void menuCalculadora(int eleccion, int array[], int tamano);

int main()
{
    int array[TAM];
    int eleccion;

    do
    {
        printf("\nBienvenido al menu \n");
        printf("Seleccione una opcion \n");
        printf("1- Llenar Array \n");
        printf("2- Mostrar Array y Direcciones \n");
        printf("3- Depurar y limpiar \n");
        printf("4- Ordenar invertido \n");
        printf("5- Reporte estadistico \n");
        printf("6- Salir del menu \n");
        printf("Opcion seleccionada:  ");
        scanf("%d", &eleccion);
        menuCalculadora(eleccion, array, TAM);
    } while (eleccion != 6);

    return 0;
}

void llenarArray(int array[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        printf("\nIngrese el valor de indice %d: \n", i);
        scanf("%d", &array[i]);
    }
}

void mostrarArray(int array[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        printf("\nEl valor de la posicion %d es: %d \n", i, array[i]);
    }
}

void depurarYlimpiar(int array[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        if (array[i] < 0)
        {
            array[i] *= -1;
        }
        if (array[i] % 2 != 0)
        {
            array[i] = 0;
        }
    }
    for (int j = 0; j < tamano; j++)
    {
        printf("\nEl valor de la posicion %d es: %d \n", j, array[j]);
    }
}

void ordenarInvertido(int array[], int tamano)
{
    int time, paro, aux;
    time = tamano - 1;
    paro = 0;
    while (paro != time)
    {
        paro = 0;
        for (int i = 0; i < time; i++)
        {
            if (array[i] < array[i + 1])
            {
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
            }
            else
            {
                paro++;
            }
        }
    }
}

void reporteEstadistico(int array[], int tamano)
{
    int suma, time, paro, valor1, valor2, valorMax, valorMin, aux;
    float promedio, mediana;
    suma = 0;
    for (int i = 0; i < tamano; i++)
    {
        suma += array[i];
    }
    promedio = (float)suma / tamano;
    printf("\nLa mediana de tu array es: %.2f\n", promedio);

    time = tamano - 1;
    paro = 0;
    while (paro != time)
    {
        paro = 0;
        for (int i = 0; i < time; i++)
        {
            if (array[i] > array[i + 1])
            {
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
            }
            else
            {
                paro++;
            }
        }
    }
    valor1 = tamano / 2.0;
    valor2 = valor1 - 1;
    if (tamano % 2 == 0)
    {
        mediana = (array[valor1] + array[valor2]) / 2.0;
    }
    printf("\nLa mediana de tu array es: %.2f\n", mediana);

    valorMax = 0;
    for (int i = 0; i < tamano; i++)
    {
        if (array[i] > valorMax)
        {
            valorMax = array[i];
        }
    }
    printf("\nEl numero mas pequeno de tu array es: %d\n", valorMax);
    valorMin = array[0];
    for (int i = 0; i < tamano; i++)
    {
        if (array[i] < valorMin)
        {
            valorMin = array[i];
        }
    }
    printf("\nEl numero mas pequeno de tu array es: %d\n", valorMin);
}

void menuCalculadora(int eleccion, int array[], int tamano)
{
    int choice;
    switch (eleccion)
    {
    case 1:
        llenarArray(array, TAM);
        break;
    case 2:
        mostrarArray(array, TAM);
        break;
    case 3:
        depurarYlimpiar(array, TAM);
        break;
    case 4:
        ordenarInvertido(array, TAM);
        break;
    case 5:
        reporteEstadistico(array, TAM);
        break;
    case 6:
        printf("Salir del Menu\n");
        break;
    default:
        printf("Opcion invalida\n");
        break;
    }
}