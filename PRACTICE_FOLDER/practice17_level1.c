#include <stdio.h>

void calibrarMuestras(int *muestra);

int main()
{
    int array[5] = {23, 150, 45, 56, 88};
    for (int i = 0; i < 5; i++)
    {
        printf("La muestra es: %d\n", array[i]);
        calibrarMuestras(&array[i]);
    }

    return 0;
}
void calibrarMuestras(int *muestra)
{
    if (*muestra >= 30)
    {
        *muestra *= 2;
    }
    else
    {
        *muestra += 30;
    }
    printf("La calibracion de la muestra es: %d\n", *muestra);
}
