/*Este programa le da la opción al usuario de alternar entre conversión de temperaturas y coordenadas, tanto esféricas como polares*/
#include<math.h>
#include<stdio.h>
int main()
{
int opcion;
int eleccion;
int L;
int G;
float F,C,K,x,y,z,r,theta,phi,pi=3.14159265359,a,b,m,delta,n,p;
printf("Solamente presione 3\n");
scanf("%i",&eleccion);
while (eleccion==3)
{
printf("Teclea una opción \n");
printf("(1) para convertir coordenadas esféricas \n");
printf("(2) para convertir temperaturas\n");
scanf("%i",&opcion);
while(opcion==1)
{ 
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
(opcion=1-1);
}
while(opcion==2)
{
printf("Proporcione una temperatura en grados Celsius: \n");
scanf("%f",&C);
(F=(((9*C)/5)+32));
(K=(C+273.15));
printf("\n La temperatura en Kelvin es : %f \n",K);
printf("\n La temperatura en Fahrenheit es : %f \n",F);
(C=((5*(F-32))/9));
printf("\n La temperatura en Celsius es : %f \n",C);
(opcion=2-2);
}
printf("Escriba 0 si quiere realizar otra operación, y 3 para salir del programa\n");
scanf("%i",&L);
G=eleccion+L;
if (G==3)
{
printf("Se reinicia el programa\n");
}
else if (G!=3) 
{
eleccion =0;
printf("Se acabó el programa\n");
}
else{
printf("\n");
}
}




return 0;
}
