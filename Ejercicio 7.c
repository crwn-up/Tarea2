// Luis Crown
//Tarea 2
//Ejercicio 7
// Ejercicio realizado con una sola variable de distancia, es decir, la distancia de ida se multiplica por dos para considerar ida y vuelta.
#include <stdio.h>

int main() {
    int dias;
    float distanciaIda, distanciaTotal, precio, precioFinal;

    printf("Ingrese la distancia de ida (km): ");
    scanf("%f", &distanciaIda);
    printf("Ingrese el número de días de estancia: ");
    scanf("%d", &dias);

    distanciaTotal = distanciaIda * 2;
    precio = distanciaTotal * 0.23;

    if (dias > 7 && distanciaTotal > 800) {
        precioFinal = precio * 0.70; 
    } else {
        precioFinal = precio;
    }

    printf("El precio del ticket es: $%.2f\n", precioFinal);
    return 0;
}





// Luis Crown
//Tarea 2
//Ejercicio 7.2
// Ejercicio realizado con dos variables, es decir, distancia de ida y vuelta si es que cambia para cada una.
#include <stdio.h>

int main() {
    int dias;
    float distanciaIda, distanciaVuelta, distanciaTotal, precio, precioFinal;

    printf("Ingrese la distancia de ida (km): ");
    scanf("%f", &distanciaIda);

    printf("Ingrese la distancia de vuelta (km): ");
    scanf("%f", &distanciaVuelta);

    printf("Ingrese el número de días de estancia: ");
    scanf("%d", &dias);

    distanciaTotal = distanciaIda + distanciaVuelta;
    precio = distanciaTotal * 0.23;

    if (dias > 7 && distanciaTotal > 800) {
        precioFinal = precio * 0.70; 
    } else {
        precioFinal = precio;
    }

    printf("El precio del ticket es: $%.2f\n", precioFinal);

    return 0;
}
