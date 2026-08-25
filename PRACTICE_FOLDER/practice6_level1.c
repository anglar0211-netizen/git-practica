#include <stdio.h>
int main()
{
    int horas, minutos, dia;
    printf("digite cuantas horas lleva: ");
    scanf("%d", &horas);
    printf("digite cuantos minutos lleva: ");
    scanf("%d", &minutos);
    printf("digite que dia de la semana es: ");
    scanf("%d", &dia);

    if (horas < 2)
    {
        printf("el costo es de 15 dolares");
    }
    else if (2 < horas && horas < 6)
    {
        printf("el costo es de 10 dolares");
    }
}