#include <stdio.h>
int main()
{
    int N, F, C;
    printf("Ingrese el valor a trabajar: \n");
    scanf("%d", &N);
    F = C = N;
    for (F = N; F > 0; F--)
    {
        for (C = N; C > 0; C--)
        {
            if ((F + C) >= (N + 1))
            {
                printf(" * ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}