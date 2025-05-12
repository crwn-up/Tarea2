//Ejercicio 13
//Tarea 2
#include <stdio.h>

int main() {
    int arreglo[100], n, suma = 0;

    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        suma += arreglo[i];
    }

    printf("La suma de los elementos es: %d\n", suma);
    return 0;
}
