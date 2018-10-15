//Este programa calcula el promedio y desviación estándar de un grupo de datos//
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main () 
{

int n,i;
float *ptr,y,z,sumatorio=0.000000,sumatorio2=0.000000;
FILE* datos;
printf("Introduce el número de elementos:");
scanf("%i",&n);
ptr=(float*) calloc(n,sizeof(int));
if(ptr==NULL) 
{
printf("¡Error! memoria no reservada,");
exit(0);
}
datos=fopen("promedio.txt","r");
for (i=0;i<n;i++){
fscanf(datos,"%f\n",(ptr+i));
sumatorio+=(*(ptr+i));
}
fclose(datos);
y=(sumatorio)/n;

datos=fopen("promedio.txt","r");
for (i=0;i<n;i++){
fscanf(datos,"%f\n",(ptr+i));
sumatorio2+=(pow(((*(ptr+i))-y),2));
}
fclose(datos);
z=sqrt(sumatorio2/(n-1));
printf("La media aritmética de los datos es:%f\n",y);
printf("La desviación estándar de los datos es: %f\n",z);
free(ptr);
return 0;
}


