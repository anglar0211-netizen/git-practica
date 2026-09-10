#include <stdio.h>
#define TAM 6
void llenarArray(int array[], int tamano);
void mostrarArrayyDirecciones(int array[], int tamano);
int obtenerMaximo(int array[], int tamano);
int obtenerMinimo(int array[], int tamano);
float obtenerPromedio(int array[], int tamano);
void menuCalculadora(int eleccion, int array[], int tamano);

int main()
{
    int eleccion;
    int array[TAM];

    printf("Primero llene el arreglo para empezar con el menu");
    llenarArray(array, TAM);
    do
    {

        printf("\nBienvenido al menu \n");
        printf("Sleccione una opcion \n");
        printf("1- Mostrar Array y Direcciones \n");
        printf("2- Obtener Maximo \n");
        printf("3- Obtener Minimo \n");
        printf("4- Obtener Promedio \n");
        printf("5- Salir del menu \n");
        scanf("%d", &eleccion);
        menuCalculadora(eleccion, array, TAM);
    } while (eleccion != 5);

    return 0;
}

void llenarArray(int array[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        printf("\nIngrese el valor para la posicion [%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void mostrarArrayyDirecciones(int array[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        printf("\nEste es el valor para la posicion [%d]: %d \n", i, array[i]);
        printf("\nEste es el valor de la direccion base para la posicion [%d]: %p \n ", i, (void *)&array[i]);
    }
}
int obtenerMaximo(int array[], int tamano)
{
    int maximo = array[0];
    for (int i = 0; i < tamano; i++)
    {
        if (array[i] > maximo)
        {
            maximo = array[i];
        }
    }
    return maximo;
}
int obtenerMinimo(int array[], int tamano)
{
    int minimo = array[0];
    for (int i = 0; i < tamano; i++)
    {
        if (array[i] < minimo)
        {
            minimo = array[i];
        }
    }
    return minimo;
}
float obtenerPromedio(int array[], int tamano)
{
    float suma, promedio;
    promedio = suma = 0;
    for (int i = 0; i < tamano; i++)
    {
        suma = suma + array[i];
    }
    promedio = suma / tamano;
    return promedio;
}

void menuCalculadora(int eleccion, int array[], int tamano)
{

    switch (eleccion)
    {
    case 1:
        mostrarArrayyDirecciones(array, TAM);
        break;
    case 2:

        printf("Este es el numero mayor de ese arreglo %d", obtenerMaximo(array, tamano));
        break;
    case 3:
        printf("Este es el numero menor de ese arreglo %d", obtenerMinimo(array, tamano));
        break;
    case 4:
        printf("Este es el promedio de ese arreglo %f", obtenerPromedio(array, tamano));
        break;
    case 5:
        printf("Salir del Menu");
        break;
    default:
        printf("Opcion invalida");
        break;
    }
}