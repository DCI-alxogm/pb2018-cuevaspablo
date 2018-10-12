//Esta es la segunda manera de redactar una función//
#include<stdio.h>
#include<math.h>
//Primera función//
int principal() 
{
int o;
printf("Escriba 1 para calcular el sinh de una variable\n");
printf("Escriba 2 para calcular el cosh de una variable\n");
printf("Escriba 3 para calcular la tanh de una variable\n");
printf("Escriba 4 para calcular el sinh de una variable\n");
scanf("%i",&o);
switch (o) {
case 1:
double sinhy(double x);
int main() 
{
double x,sinh;
printf("Introduce un número \n");
scanf("%lf",&x);
sinh=(((exp(x))-(exp(-x)))/2);
printf("El seno hiperbólico de %lf es: %lf\n",x,sinh);
return 0;
}
double sinhy(double x){
return sinh;
}
break;
// Segunda función//
case 2:
void coshy();
int main(){
cosh();
return 0;
}
void coshy(){
double  x,cosh;
printf("Introduce un número \n");
scanf("%lf",&x);
coshy=(((exp(x))+(exp(-x)))/2);
printf("El coseno hiperbólico de %lf es: %lf\n",x,cosh);
}
break;
//Tercera función//
case 3:
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
break;
//Cuarta función//
case 4:
break;
}
return 0;
}

