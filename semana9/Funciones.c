#include<stdio.h>
#include<math.h>
float raiz(float h);
void sinhy();
void coshy(float x);
double a,b;
double tanhy();
int main()
{
int o;
float x,z;
printf("Escriba 1 para calcular el sinh de una variable\n");
printf("Escriba 2 para calcular el cosh de una variable\n");
printf("Escriba 3 para calcular la tanh de una variable\n");
printf("Escriba 4 para calcular la raíz cuadrada de una variable\n");
scanf("%i",&o);
switch (o) {
case 1:
sinhy();
break;
// Segunda función//
case 2:
printf("Escriba un número para calcular el valor de su coseno hiperbólico\n");
scanf("%f",&x);
coshy(x);
break;
//Tercera función//
case 3:
tanhy();
printf("%lf\n",b);
break;
//Cuarta función//
case 4:
printf("Introduce un número \n");
scanf("%f",&x);
z=raiz(x);
printf("La raíz de %f es %f\n",x,z);
break;
}
return 0;
}
//Aquí está la primera función//
void sinhy (){
float x,z;
printf("Introduce un número \n");
scanf("%f",&x);
z=((exp(x))/2)-((exp(-x))/2);
printf("El seno hiperbólico de %f es %f\n",x,z);
}
//Aquí está la segunda función//
void coshy(float x)
{ 
float z;
z=((exp(x))/2)+((exp(-x))/2);
printf ("El coseno hiperbólico de %f es:%f\n",x,z);
}
//Aquí está la tercer función//
double tanhy()
{
printf("Introduzca un número cualquiera\n");
scanf("%lf", &a);
b=(((exp(a))/2)-((exp(-a))/2))/(((exp(a))/2)+((exp (-a))/2));
printf ("La tangente hiperbólica de %lf es:\n",a);
return b;
}
//Aquí está la cuarta función//
float raiz(float h){
return sqrt(h);
}




