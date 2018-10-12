#include<stdio.h>
#include<math.h>
void coshy();
int main(){
cosh();
return 0;
}
void coshy(){
double  x,cosh;
printf("Introduce un número \n");
scanf("%lf",&x);
cosh=(((exp(x))+(exp(-x)))/2);
printf("El coseno hiperbólico de %lf es: %lf\n",x,cosh);
}
