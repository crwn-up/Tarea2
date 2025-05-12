//Tarea 2
// Ejercicio 14
#include <stdio.h>

int main() {
    int arreglo[100], n, numero, contador = 0;

    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    printf("Ingrese el número a buscar: ");
    scanf("%d", &numero);

    for(int i = 0; i < n; i++) {
        if(arreglo[i] == numero) {
            contador++;
        }
    }

    printf("El número %d aparece %d veces en el arreglo.\n", numero, contador);
    return 0;
}
