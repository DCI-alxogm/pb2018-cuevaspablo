/*Este programa transforma las coordenadas cartesianas dadas a las esféricas*/
#include<stdio.h>
#include<math.h>
int main()
{
float x,y,z,r,theta,phi,pi=3.14159265359;
printf("De el valor de las coordenadas cartesianas en un punto en el espacio \n");
scanf("%f",&x);
scanf("%f",&y);
scanf("%f",&z);
r=(sqrt((pow(x,2))+(pow(y,2))+(pow(z,2))));
printf("\n El valor análogo de x es: %f,\n",r);
theta=atan((sqrt((pow(x,2))+(pow(y,2)))/z))*(180/pi);
printf("\n El valor análogo de y es: %f,\n",theta);
phi=(atan(y/x))*(180/pi);
printf("\n El valor análogo de z es: %f,\n",phi);
x=(r*(sin(theta*(pi/180)))*(cos(phi*(pi/180))));
printf("\n Este es el valor de la variable original: %f,\n",x);
y=(r*(sin(theta*(pi/180)))*(sin(phi*(pi/180))));
printf("\n Este es el valor de la variable original: %f,\n",y);
z=(r*(cos(theta*(pi/180))));
printf("\n Este es el valor de la variable original: %f,\n",z);
return 0;
}
