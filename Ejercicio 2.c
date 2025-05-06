//Tarea2
//Ejercicio 2
#include <stdio.h>
#define PI 3.1416

int main () {
    float radio, area, circunferencia;
    
    printf("Ingrese el radio de la circunferencia:");
    scanf("%f", &radio);
    area = PI * radio * radio;
    circunferencia = radio * 2 * PI;
    
    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circunferencia);
return 0;
}
