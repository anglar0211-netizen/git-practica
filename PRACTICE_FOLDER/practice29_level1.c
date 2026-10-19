// Aritmética de Punteros e Incrementos y Paso por Referencia: Modificación de variables locales desde funciones
#include <stdio.h>
void calibrarLectura(int *direccion, int offset)
{
    *direccion += offset;
    printf("%d", *direccion);
}
int main()
{
    int presion = 1020;
    calibrarLectura(&presion, -15);
    return 0;
}

int FindMax(int *direction, int size)
{
    int aux = *direction;
    for (int i = 0; i < (size); i++)
    { // while(direction<size) why? direction + size (direction + 5): Dirección 0x1000 + (5 × 4 bytes) = 0x1014.
        if (aux < *direction)
        { // size is equal to a data type not a decimal so 5 data types as integret is
            aux = *direction;
        }
        direction++;
    }
    return aux;
}

int main()
{
    int size, datos[5] = {10, 20, 30, 40, 50};
    size = sizeof(datos) / sizeof(datos[0]);
    printf("El numero mas grande es: %d", FindMax(datos, size));
    return 0;
}

void analizarVoltajes(int *buffer, int size, int *minimo, int *haySobrevoltaje)
{
    *minimo = *buffer;
    *haySobrevoltaje = 0;
    int *limite = buffer + size;
    while (buffer < limite)
    {

        if (*minimo > *buffer)
        {
            *minimo = *buffer;
        }
        if (*buffer > 5000)
        {
            *haySobrevoltaje = 1;
        }
        buffer++;
    }
}
int main()
{
    int lecturas[4] = {3300, 4800, 5200, 3100};
    int min = 0;
    int size, alerta = 0;
    size = sizeof(lecturas) / sizeof(lecturas[0]);

    analizarVoltajes(lecturas, size, &min, &alerta);
    printf("El voltaje mas peque;o fue %d\n La estado de la alrma: %d", min, alerta);
    return 0;
}