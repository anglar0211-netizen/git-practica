#include <stdio.h>
void analizarEInvertir(int numero);
void menuCalculadora(int eleccion);
int main()
{
    int eleccion;
    do
    {
        printf("\nBienvenido al menu \n");
        printf("Sleccione una opcion \n");
        printf("1) Analizar E Invertir \n");
        printf("2) Salir del menu \n");
        scanf("%d", &eleccion);
        menuCalculadora(eleccion);
    } while (eleccion != 2);

    return 0;
}
void analizarEInvertir(int numero)
{
    int devuelvenumero, sumpar = 0, sumimpar = 0;
    while (numero > 0)
    {
        devuelvenumero = numero % 10;
        printf("%d", devuelvenumero);
        if (devuelvenumero % 2 == 0)
        {
            sumpar = sumpar + devuelvenumero;
        }
        else
        {
            sumimpar = sumimpar + devuelvenumero;
        }
        numero /= 10;
    }
    printf("\nLa suma de los numeros pares es: %d \n", sumpar);
    printf("La suma de los numeros impares es: %d", sumimpar);
}
void menuCalculadora(int eleccion)
{
    int numero;
    switch (eleccion)
    {
    case 1:
        printf("Ingrese la cantidad de numero que quiere ver en su analisis \n ");
        scanf("%d", &numero);
        if (numero > 0)
        {
            analizarEInvertir(numero);
        }
        else
        {
            printf("Su numero ingresado no aplica");
        }
        break;
    case 2:
        printf("Salir del menu");
        break;
    default:
        printf("Opcion invalida");
        break;
    }
}