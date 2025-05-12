// Tarea 2
// Ejercicio 16
#include <stdio.h>

int main() {
    int arreglo[100];
    int i = 0;
    int numero = 2;

    while(i < 100) {
        arreglo[i] = numero;
        numero += 2;
        i++;
    }

    printf("Los primeros 100 números pares son:\n");

    i = 0;
    while(i < 100) {
        printf("%d ", arreglo[i]);
        i++;
    }

    printf("\n");
    return 0;
}
