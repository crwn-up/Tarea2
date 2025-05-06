//Tarea2
//Ejercicio 4
#include <stdio.h>

int main () {
 float capital, tasaInteres, monto;
 
 printf("Ingresa la cantidad a invertir:");
 scanf("%f", &capital);
 
 printf("Ingresa la tasa de interes mensual en porcentaje:");
 scanf("%f", &tasaInteres);
 monto = capital + (capital * tasaInteres/100);
 printf("Monto al finalizar el mes: %.2f\n", monto);
 
return 0;
}
