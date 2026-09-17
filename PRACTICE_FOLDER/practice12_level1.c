#include <stdio.h>
#define TAM 8

void llenarArray(int array[], int tamano);
void mostrarArray(int array[], int tamano);
void ordenarBurbuja(int array[], int tamano);
int contarFrecuencia(int array[], int tamano, int choice);
float obtenerMediana(int array[], int tamano);
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
        printf("3- Ordenar burbuja \n");
        printf("4- Contar frecuencia \n");
        printf("5- Obtener mediana \n");
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

void ordenarBurbuja(int array[], int tamano)
{
    int time, aux, paro;
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

    for (int j = 0; j < tamano; j++)
    {
        printf("\nEl valor de la posicion %d es: %d \n", j, array[j]);
    }
}

int contarFrecuencia(int array[], int tamano, int choice)
{
    int time, contador, frecuencia, valor, elemento;
    time = tamano - 1;
    contador = 0;
    frecuencia = 0;

    if (choice == 1)
    {
        printf("Ingrese el elemento que quiere comparar: ");
        scanf("%d", &elemento);
        for (int i = 0; i < tamano; i++)
        {
            if (elemento == array[i])
            {
                contador++;
            }
        }
    }
    frecuencia = 0;
    if (choice == 0)
    {
        for (int j = 0; j < tamano; j++)
        {
            contador = 0;
            for (int i = 0; i < tamano; i++)
            {
                if (array[j] == array[i])
                {
                    contador++;
                }
            }
            if (contador > frecuencia)
            {
                frecuencia = contador;
            }
        }
    }
    valor = frecuencia + contador;
    return valor;
}

float obtenerMediana(int array[], int tamano)
{
    int mitad, valor1, valor2, time, aux, paro;
    float mediana;
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

    if (tamano % 2 == 0)
    {
        mitad = tamano / 2;
        valor1 = mitad - 1;
        valor2 = mitad;
        mediana = (array[valor1] + array[valor2]) / 2;
    }
    if (tamano % 2 != 0)
    {
        mitad = (tamano / 2) + 0.5;
        mediana = (array[mitad] + 1) / 2;
    }
    return mediana;
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
        ordenarBurbuja(array, TAM);
        break;
    case 4:
        printf("Selecciones su opcion\nManual=1\nAutomatico=0\n");
        scanf("%d", &choice);
        printf("Estas son las veces que se repitio su numero o el numero mas repetido en el array: %d\n", contarFrecuencia(array, TAM, choice));
        break;
    case 5:
        printf("Esta es la mediana de ese arreglo: %f\n", obtenerMediana(array, TAM));
        break;
    case 6:
        printf("Salir del Menu\n");
        break;
    default:
        printf("Opcion invalida\n");
        break;
    }
}