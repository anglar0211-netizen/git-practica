#include <stdio.h>

void modificarVoltaje(int *ptr);

int main()
{
    int voltaje = 12;
    int *ptrVoltaje;
    ptrVoltaje = &voltaje;
    printf("El valor del puntero es: %d\n", *ptrVoltaje);
    printf("El valor del puntero es: %p\n", ptrVoltaje);
    modificarVoltaje(ptrVoltaje);
    printf("El valor del puntero es: %d\n", *ptrVoltaje);
    return 0;
}

void modificarVoltaje(int *ptr)
{
    *ptr = 5;
}
