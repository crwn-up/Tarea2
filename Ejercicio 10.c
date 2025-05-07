// Luis Crown
//Tarea 2
//Ejercicio 10
#include <stdio.h>

int main() {
    int i, numero;
    int positivos = 0, negativos = 0, ceros = 0;

    for (i = 1; i <= 100; i++) {
        printf("Ingrese el número %d: ", i);
        scanf("%d", &numero);

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Ceros: %d\n", ceros);

    return 0;
}
