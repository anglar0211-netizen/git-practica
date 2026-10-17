#include <stdio.h>

void procesarBateria(int *bateria, int tamano, int *promedio, int *celdasBajas)
{
    int *size = bateria + tamano;
    int sum = 0, contador = 0;
    while (bateria < size)
    {
        if (*bateria < 3300)
        {
            contador++;
        }
        sum += *bateria;
        bateria++;
    }
    *promedio = sum / tamano;
    *celdasBajas = contador;
}

int main()
{
    int celdas[6] = {3700, 3200, 3800, 3100, 3600, 3500};
    int prom = 0, bajas = 0;
    int *ptr1 = celdas;
    int *ptr2 = &prom;
    int *ptr3 = &bajas;
    int size = sizeof(celdas) / sizeof(celdas[0]);

    procesarBateria(ptr1, size, ptr2, ptr3);
    printf("El promedio es de: %d\n", prom);
    printf("La cantidad de celdas son: %d\n", bajas);

    if (bajas > 0)
    {
        printf("ADVERTENCIA: Bateria baja!\n");
    }
    else
    {
        printf("Estado: Normal\n");
    }
    return 0;
}
