//En este ejemplo se calcula el cuadrado de un número con una función que no tiene argumentos de entrada pero sí de salida//
#include<stdio.h>
void cuadrado();
int main()
{
float x,x2;
printf("Escriba un número para elevarlo al cuadrado\n");
scanf("%i\n",&x);
printf("El cuadrado de %f es %f \n",x,x2);
return 0;
}
void cuadrado()
{ x2=x*x;
return x*x;
}

