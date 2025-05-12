//Tarea2
//Ejercicio 3
#include <stdio.h>

int main() {
    float dolares, pesos;
    const float tasaCambio = 11.96;

    printf("Ingrese la cantidad en dólares: ");
    scanf("%f", &dolares);

    pesos = dolares * tasaCambio;

    printf("Equivale a %.2f pesos.\n", pesos);

    return 0;
}
