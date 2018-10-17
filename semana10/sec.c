//Este archivo crea una función que puede calcular la secante de una variable, usando identidades trigonométricas//
#include<stdio.h>
#include<math.h>
void sec()
{
float z,x;
double pi = 3.14152926535;
printf("De un valor a la variable x \n");
scanf("%f",&x);
z=(1/(cos(x*(pi/180))));
printf("La secante de %f es: %f \n",x,z);
}
