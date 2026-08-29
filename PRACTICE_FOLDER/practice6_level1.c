#include <stdio.h>
int main()
{
    int t, p, hm, horas, minutos, dia, monto1, monto2, monto3, faltante, total;
    printf("digite cuantas horas lleva: ");
    scanf("%d", &horas);
    printf("digite cuantos minutos lleva: ");
    scanf("%d", &minutos);
    printf("digite que dia de la semana es: ");
    scanf("%d", &dia);
    hm = horas * 60 + minutos;

    if (hm > 1)
    {
        monto1 = 15;
    }
    if (hm > 60)
    {
        t = hm - 60;
        p = t / 60;
        faltante = (1 - p) * -1;
        if (faltante < 1 && faltante > 0)
        {
            monto3 = (p + faltante) * 5;
        }
        else
        {
            monto3 = p * 5;
        }
    }
    if (hm > 300)
    {
        t = hm - 300;
        p = t / 60;
        faltante = (1 - p) * -1;
        if (faltante < 1 && faltante > 0)
        {
            monto3 = (p + faltante) * 5;
        }
        else
        {
            monto3 = p * 5;
        }
    }

    total = monto1 + monto2 + monto3;
    printf("el total a pagar es: %d", total);
    return 0;
}