#include <stdio.h> ////CALIFICACION FINAL 8.5/10
int main (){
    int subtotal,eleccion,edad,total,dia;
    printf("DIGITE SU EDAD:\n");
    scanf("%d", &edad);
    printf("DIGITE EL DIA DE LA SEMANA (1-7): \n");
    scanf("%d", &dia);
    printf("EL MENU ES EL SIGUEINTE: \n 1.-ALIMENTOS \n 2.BEBIDAS \n 3.-POSTRES \n 4.-SALIR\n ");
    scanf("%d", &eleccion);

    switch (eleccion)
    {
        case 1:
            printf("indique cuanto fue el subotatal de la compra: \n");
            scanf("%d", &subtotal);
            if (subtotal > 500)
            {
                if (edad > 60){
                total = subtotal * 0.75;
                printf("El subtotal a pagar es: %d\n", subtotal);
                printf("El descuento fue de 25%");
                printf("El total a pagar es: %d\n", total);
                }
                else
                {
                total = subtotal * 0.9;
                printf("El subtotal a pagar es: %d\n", subtotal);
                printf("El descuento fue de 10%");
                printf("El total a pagar es: %d\n", total);   
                }
            }
            else 
            {
                if (edad > 60){
                total = subtotal * 0.85;
                printf("El subtotal a pagar es: %d\n", subtotal);
                printf("El descuento fue de 15%");
                printf("El total a pagar es: %d\n", total);
                }
                else
                {
                total = subtotal * 1;
                printf("El total a pagar es: %d\n", total);    
                }
            }
            break;

        case 2:
            printf("indique cuanto fue el subotatal de la compra: \n");
            scanf("%d", &subtotal);
            if (edad > 60){
                
                if (dia == 6 || dia ==7)
                {
                    total = subtotal * 0.95;
                    printf("El subtotal a pagar es: %d\n", subtotal);
                    printf("El incremento fue de 10% y el descuento fue de 15%");
                    printf("El total a pagar es: %d\n", total);
                }
                else
                {
                    total = subtotal * 0.85;
                    printf("El subtotal a pagar es: %d\n", subtotal);
                    printf("El descuento fue de 15%");
                    printf("El total a pagar es: %d\n", total);
                }
            }
            else
            {
                if (dia == 6 || dia ==7)
                {
                    total = subtotal * 0.95;
                    printf("El subtotal a pagar es: %d\n", subtotal);
                    printf("El incremento fue de 10% y el descuento fue de 15%");
                    printf("El total a pagar es: %d\n", total);
                }
                else
                {
                    total = subtotal * 1;
                    printf("El subtotal a pagar es: %d\n", subtotal);
                    printf("El total a pagar es: %d\n", total);
                }
            }
            break;
        case 3:
            printf("indique cuanto fue el subotatal de la compra: \n");
            scanf("%d", &subtotal);
            if (edad > 60)
            {
                total = subtotal * 0.85;
                printf("El subtotal a pagar es: %d\n", subtotal);
                printf("El descuento fue de 15%");
                printf("El total a pagar es: %d\n", total);
                
            } 
            else
            {
                {
                    total = subtotal * 1;
                    printf("El total a pagar es: %d\n", total);
                }   
            }
            break;
        case 4:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }

}