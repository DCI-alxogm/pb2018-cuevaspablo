#include<stdio.h>
#include<math.h>
void tanhy(double x);
int main()
{
double x,tanh;
printf("Escriba una variable para calcular la tangente hiperbólica\n");
scanf("%lf",&x);
tanhy(x);
return 0;
}
void tanhy(double x)
{ 
double tanh;
tanh=((exp(x))+(exp(-x)))/((exp(x))-(exp(-x)));
printf("La tangente hiperbólica de %lf es %lf \n",x,tanh);
}
