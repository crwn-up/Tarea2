// Luis Crown
//Tarea 2
//Ejercicio 5

#include <stdio.h>

int main() {
    float compra, total;

    printf("Ingrese el monto de la compra: ");
    scanf("%f", &compra);

    if (compra > 2500) {
        total = compra * 0.92; 
    } else {
        total = compra;
    }

    printf("El total a pagar es: $%.2f\n", total);
    return 0;
}
