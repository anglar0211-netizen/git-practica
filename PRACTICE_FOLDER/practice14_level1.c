#include <stdio.h>
#define TAM 8

void capturarMuestras(int muestras[], int cantidad);
void mostrarMuestras(int muestras[], int cantidad);
void normalizarSensores(int muestras[], int cantidad);
void reporteMonitoreo(int muestras[], int cantidad);
void menu(int eleccion, int muestras[], int cantidad);

int main()
{
    int muestras[TAM];
    int eleccion;
    do
    {
        printf("\nBienvenido al menu \n");
        printf("Seleccione una opcion \n");
        printf("1- Capturar Muestras \n");
        printf("2- Mostrar Muestras \n");
        printf("3- Normalizar Sensores \n");
        printf("4- Reporte de Monitoreo \n");
        printf("5- Salir del menu \n");
        printf("Opcion seleccionada:  ");
        scanf("%d", &eleccion);
        menu(eleccion, muestras, TAM);
    } while (eleccion != 5);

    return 0;
}

void capturarMuestras(int muestras[], int cantidad)
{
    printf("Ingrese sus muestras\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("Cual es la muestra para la lectura %d:  ", i + 1);
        scanf("%d", &muestras[i]);
    }
}
void mostrarMuestras(int muestras[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        printf("La muestra para la lectura %d es: %d \n ", i + 1, muestras[i]);
    }
}
void normalizarSensores(int muestras[], int cantidad)
{

    for (int i = 0; i < cantidad; i++)
    {
        if (muestras[i] < 0)
        {
            muestras[i] = 0;
        }
        if (muestras[i] > 100)
        {
            muestras[i] = 100;
        }
    }
    for (int i = 0; i < cantidad; i++)
    {
        printf("La muestra para la lectura %d es: %d\n ", i + 1, muestras[i]);
    }
}
void reporteMonitoreo(int muestras[], int cantidad)
{
    float promedio, mediana;
    int suma, valor1, valor2, max, min, rango;
    /// promedio
    rango = promedio = suma = 0;
    for (int i = 0; i < cantidad; i++)
    {
        suma += muestras[i];
    }
    promedio = (float)suma / cantidad;

    /// mediana
    valor1 = cantidad / 2;
    valor2 = valor1 - 1;
    mediana = (muestras[valor1] + muestras[valor2]) / 2.0;
    printf("El valor de la mediana de este array es de: %.2f\n", mediana);

    /// max
    max = muestras[0];
    for (int i = 0; i < cantidad; i++)
    {
        if (muestras[i] > max)
        {
            max = muestras[i];
        }
    }
    printf("Su muestra mas alta del sensor es: %d\n", max);

    /// min
    min = muestras[0];
    for (int i = 0; i < cantidad; i++)
    {
        if (muestras[i] < min)
        {
            min = muestras[i];
        }
    }
    printf("Su muestra mas baja del sensor es: %d\n", min);

    /// rango
    rango = max - min;
    printf("Su rango es: %d\n", rango);
}
void menu(int eleccion, int muestras[], int cantidad)
{

    switch (eleccion)
    {
    case 1:
        capturarMuestras(muestras, TAM);
        break;
    case 2:
        mostrarMuestras(muestras, TAM);
        break;
    case 3:
        normalizarSensores(muestras, TAM);
        break;
    case 4:
        reporteMonitoreo(muestras, TAM);
        break;
    case 5:
        printf("5- Salir del menu \n");
        break;
    default:
        printf("Opcion Invalida\n");
        break;
    }
}