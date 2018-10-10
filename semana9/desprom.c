//Este programa utiliza arreglos para encontrar el promedio y la desviación estándar de un grupo de datos//
#include<stdio.h>
#include<stdlib.h>
int main () 
{
FILE* promedio;
FILE* resultados;

int n=10,i;
double numeros[n],sumatorio,a;
promedio=fopen("promedio.txt","r");
for (i=0;i<n;i++){
fscanf(promedio,"%lf\n",&numeros[n]);
}
fclose(promedio);
for (i=0;i<n;i++){
sumatorio+=numeros[n];
}
a=sumatorio/n;
scanf("%lf",&a);
resultados=fopen("resultados.txt","w");
fprintf("%lf\n",a);
fclose(resultados);



return 0;
}
