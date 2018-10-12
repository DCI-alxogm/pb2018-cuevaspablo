//En este ejemplo se calcula el cuadrado de un número con una función que no tiene argumentos de salida pero sí de entrada//
#include<stdio.h>
void cuadrado(float x);
int main()
{
float x,x2;
printf("Escriba un número para elevarlo al cuadrado\n");
scanf("%f",&x);
cuadrado(x);
return 0;
}
void cuadrado(float x)
{ 
float x2;
x2=x*x;
printf("El cuadrado de %f es %f \n",x,x2);
}

