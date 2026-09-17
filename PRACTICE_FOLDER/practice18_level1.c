#include <stdio.h>

void enfriarMotor(int *temp);

int main()
{
    int temperaturas[5] = {23, 150, 45, 56, 88};
    for (int i = 0; i < 5; i++)
    {
        printf("La muestra es: %d\n", temperaturas[i]);
        enfriarMotor(&temperaturas[i]);
    }

    return 0;
}
void enfriarMotor(int *temp)
{
    if (*temp > 100)
    {
        *temp -= 20;
    }
    else
    {
    }
    printf("La calibracion de la muestra es: %d\n", *temp);
}
