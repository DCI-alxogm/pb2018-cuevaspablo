//En este ejemplo se calcula el cuadrado de un número con una función que no tiene argumentos de entrada pero sí de salida//
#include <stdio.h>
double x,x2;

double cuadrado();
int main()
{
cuadrado();
printf("%lf\n", x2);
}
double cuadrado()
{
printf("Introduzca un número cualquiera\n");
scanf("%lf", &x);
x2=x*x;
printf("El cuadrado de %lf es:\n ",x);
return x2;
}
