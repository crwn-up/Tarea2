// Luis Crown
//Tarea 2
//Ejercicio 12
// A pesar de que en clase no vimos "long long", al usar este tipo de operaciones que se asemejan a la operación de un factorial, se utilizó para lograr productos muy grandes en lugar de int o double.
#include <stdio.h>

int main() {
    int N, i = 1;
    long long producto = 1; 

    printf("Ingrese un número natural N: ");
    scanf("%d", &N);

    while (i <= N) {
        producto *= i;
        i++;
    }

    printf("El producto de los primeros %d números naturales es: %lld\n", N, producto);

    return 0;
}
