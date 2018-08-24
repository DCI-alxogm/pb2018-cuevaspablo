/*Este programa nos permite escoger entre dos opciones: convertir coordenadas cartesianas a esféricas y viceversa, o convertir temperaturas*/
#include<stdio.h>
#include<math.h>
int main()
{
int opcion;
float F,C,K,x,y,z,r,theta,phi,pi=3.14159265359,a,b,m,delta,n,p;
printf("Teclea una opción \n");
printf("(1) para convertir coordenadas esféricas \n");
printf("(2) para convertir temperaturas\n");
printf("(3) para convertir coordenadas polares\n");
scanf("%i",&opcion);
switch(opcion)
{
case 1:
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
break;
case 2:
printf("Proporcione una temperatura en grados Celsius: \n");
scanf("%f",&C);
(F=(((9*C)/5)+32));
(K=(C+273.15));
printf("\n La temperatura en Kelvin es : %f \n",K);
printf("\n La temperatura en Fahrenheit es : %f \n",F);
(C=((5*(F-32))/9));
printf("\n La temperatura en Celsius es : %f \n",C);
break;
case 3:
printf("De un par de coordenadas cartesianas\n");
scanf("%f",&a);
scanf("%f",&b);
m=(sqrt((pow(a,2))+(pow(b,2))));
printf("\nEl valor de m en polares es: %f,\n",m);
delta=((atan(b/a))*(180/pi));
printf("\nEl valor de delta en polares es: %f,\n",delta); 
n=(m*(cos(delta*(pi/180))));
printf("\nEl valor orinal de a es: %f,\n",n);
p=(m*(sin(delta*(pi/180))));
printf("\nEl valor orinal de b es: %f,\n",p);;
if (a>0 && b>0)
{printf("El punto está en el primer cuadrante\n");
}
else if (a<0 && b>0)
{printf("El punto está en el segundo cuadrante\n");
}
else if (a>0 && b<0)
{printf("El punto está en el tercerd cuadrante\n");
}
else if (a<0 && b<0)
{printf("El punto está en el cuarto cuadrante\n");
}
break;
default:
printf("Opción inválida\n");
break;
}
}

