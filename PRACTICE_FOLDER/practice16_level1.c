#include <stdio.h>

void swapValues(int *a, int *b);

int main()
{
    int tempA, tempB;
    int *ptrtempA, *ptrtempB;
    tempA = 40;
    tempB = 80;
    ptrtempA = &tempA;
    ptrtempB = &tempB;
    printf("Los valores de temperatura son: A= %d y B= %d\n", *ptrtempA, *ptrtempB);
    printf("Los valores de sus direcciones son: A= %p y B= %p\n", ptrtempA, ptrtempB);
    swapValues(ptrtempA, ptrtempB);
    printf("Los valores de temperatura son: A= %d y B= %d\n", *ptrtempA, *ptrtempB);

    return 0;
}

void swapValues(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
