/*En este programa se evaluarán los valores de diveras funciones con una sola variable*/
#include<stdio.h>
#include<math.h>
int main()
{
float x,y,z,w,pi=3.14159265359;
printf("De un valor a la variable x \n");
scanf("%f",&x);
(y=(exp(-x)));
printf("\n El valor de menos x evaluada en una exponencial es: %f,\n",y);
printf("De un valor a la variable x en grados \n");
scanf("%f",&x);
(x=(x*(pi/180)));
(z=((cos(x))+(2*(tan(x/2)))));
printf("\n EL coseno de x más la tangente de x entre dos, es: %f,\n",z);
printf("De un valor a la variable x \n");
scanf("%f",&x);
(w=((log(x))+(3*(pow(x,2)))));
printf("\n El valor del logaritmo de x más tres veces x al cuadrado es: %f,\n",w);
return 0;
}
