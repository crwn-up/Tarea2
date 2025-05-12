// Tarea 2
// Ejercicio 15
#include <stdio.h>

int main() {
    int arreglo[100], n;
    int positivos = 0, negativos = 0, ceros = 0;

    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);

        if(arreglo[i] > 0)
            positivos++;
        else if(arreglo[i] < 0)
            negativos++;
        else
            ceros++;
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Ceros: %d\n", ceros);
    return 0;
}
