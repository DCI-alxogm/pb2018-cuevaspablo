#include<stdio.h>
#include<math.h>
float sinhy(float x);
int main() 
{
float x,sinh;
printf("Introduce un número \n");
scanf("%f",&x);
sinh=(((exp(x))-(exp(-x)))/2);
printf("El seno hiperbólico de %f es: %f\n",x,sinh);
return 0;
}
float sinhy(float x){
return sinh*sinh;
}

