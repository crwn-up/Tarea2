// Luis Crown
//Tarea 2
//Ejercicio 11
// para no realizar una estructura de if y evaluar cada numero con un operador módulo, usé += 2 para incrementar el contador a partir de 10 de 2 en 2, de modo que solo cuente a los números pares.
#include <stdio.h>

int main() {
    int suma = 0;
    int i;

    for (i = 10; i <= 50; i += 2) {
        suma += i;
    }

    printf("La suma de los pares entre 10 y 50 es: %d\n", suma);

    return 0;
}
