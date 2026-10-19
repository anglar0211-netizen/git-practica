// excersice to understand double pointers and how to use them in C.
// The program demonstrates how to write data into a buffer using a pointer to a
// pointer, allowing for circular writing and calculating the average of the written values.
#include <stdio.h>

// Función 1: Escribe un dato y gestiona el puntero de forma circular
void escribirBuffer(int *buffer, int tamaño, int **ptrEscritura, int nuevoValor)
{
    // 1. Guardamos el nuevo valor en la celda de la RAM apuntada actualmente
    **ptrEscritura = nuevoValor;

    // 2. Avanzamos el puntero del main a la siguiente celda
    (*ptrEscritura)++;

    // 3. Verificación de Límite (Rebote circular)
    // Si el puntero llegó a "buffer + tamaño", significa que está en la casilla 5 (inexistente).
    if (*ptrEscritura == buffer + tamaño)
    {
        *ptrEscritura = buffer; // Lo regresamos a la casilla 0 (buffer)
    }
}

// Función 2: Recorre la memoria desde 'inicio' hasta 'fin' y calcula el promedio
int calcularPromedioRAM(int *inicio, int *fin)
{
    int suma = 0;
    int contador = 0;

    // Recorremos la RAM celda por celda mientras no hayamos llegado a 'fin'
    while (inicio < fin)
    {
        suma += *inicio; // Sumamos el valor de la celda actual
        contador++;      // Contamos cuántas celdas llevamos
        inicio++;        // Avanzamos al siguiente byte/entero
    }

    if (contador == 0)
        return 0; // Protección contra división por cero

    return suma / contador;
}

int main()
{
    int buffer[5] = {0}; // Arreglo de 5 celdas en RAM
    int size = 5;

    // pEscritura es un puntero normal que empieza apuntando a buffer[0]
    int *pEscritura = buffer;

    printf("=== Insertando 3 datos ===\n");
    // Pasamos &pEscritura (dirección del puntero) para que la función pueda mover pEscritura
    escribirBuffer(buffer, size, &pEscritura, 100);
    escribirBuffer(buffer, size, &pEscritura, 200);
    escribirBuffer(buffer, size, &pEscritura, 300);

    // En este momento pEscritura apunta a la celda 3.
    // Calculamos el promedio desde la celda 0 hasta pEscritura (celda 3)
    int prom = calcularPromedioRAM(buffer, pEscritura);
    printf("Promedio de los 3 datos: %d\n\n", prom); // Debe dar 200

    printf("=== Insertando 3 datos mas (Probando el rebote circular) ===\n");
    printf("Direccion antes de llenar: %p\n", (void *)pEscritura);

    escribirBuffer(buffer, size, &pEscritura, 400); // Escribe en celda 3
    escribirBuffer(buffer, size, &pEscritura, 500); // Escribe en celda 4

    // Al escribir 600, como la celda 5 no existe, rebota a la celda 0
    escribirBuffer(buffer, size, &pEscritura, 600);

    printf("Direccion despues del rebote: %p\n", (void *)pEscritura); // En C, cuando quieres imprimir una dirección de memoria en hexadecimal
    printf("Direccion base del buffer[0]: %p\n", (void *)buffer);     //(usando el formato %p), la regla formal de C exige convertir (castear) ese
                                                                      // puntero al tipo genérico void*
    return 0;
}