#include <stdio.h>
void menuCalculadora(int eleccion);
void fibonacci(int num);

int main()
{
    int eleccion;
    do
    {
        printf("Bienvenido al menu \n");
        printf("Sleccion una opcion \n");
        printf("1) Fibonacci \n");
        printf("2) Salir del menu \n");
        scanf("%d", &eleccion);
        menuCalculadora(eleccion);
    } while (eleccion != 2);

    return 0;
}

void fibonacci(int num)
{
    int a = 0, b = 1, nuevo;
    printf("%d \n%d\n", a, b);
    for (int i = 0; i < num; i++)
    {
        nuevo = a + b;
        a = b;
        b = nuevo;
        printf("%d\n", nuevo);
    }
}
void menuCalculadora(int eleccion)
{
    int num;
    switch (eleccion)
    {
    case 1:
        printf("Ingrese la cantidad de numero que quiere ver de la serie de fibonacci \n ");
        scanf("%d", &num);
        fibonacci(num);
        break;
    case 2:
        printf("Salir del menu");
        break;
    default:
        printf("Opcion invalida");
        break;
    }
}