//Este programa utiliza arreglos para encontrar el promedio y la desviación estándar de un grupo de datos//
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () 
{
FILE* promedio;

int n=267,i;
double numeros[n],sumatorio,a,b,c,sumatorio2,resultados[n];
promedio=fopen("promedio.txt","r");
for (i=0;i<n;i++){
fscanf(promedio,"%lf\n",&numeros[i]);
}
fclose(promedio);
for (i=0;i<n;i++){
sumatorio+=numeros[i];
}
a=sumatorio/n;
for(i=0;i<n;i++){
resultados[i]=numeros[i]-a;
sumatorio2+=resultados[i];
}
c=sqrt(sumatorio2/n);

printf("EL promedio de los datos es: %lf\n",a);
printf("La desviación estándar de los datos es: %lf\n",c);


return 0;
}
