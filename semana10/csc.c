//Este archivo crea una función que calcula la cosecante de una variable, usando identidades trigonométricas//
#include<stdio.h>
#include<math.h>
void csc()
{

float x,z;
double pi = 3.14152926535;
printf("De un valor a la variable x \n");
scanf("%f",&x);
z=(1/(sin(x*(pi/180))));
printf("La cosecante de %f es: %f \n",x,z);
}


