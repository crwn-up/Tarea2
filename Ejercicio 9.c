// Luis Crown
//Tarea 2
//Ejercicio 9
#include <stdio.h>

int main() {
    int N, i;

    printf("Ingrese un número entero: ");
    scanf("%d", &N);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
