//Este programa utiliza arreglos para encontrar el promedio y la desviación estándar de un grupo de datos//
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () 
{
FILE* promedio;
int n=267,i,*ptr,sumatorio=0;
double numeros[n],a,b,resultados[n],sumatorio2;

ptr=(int*) calloc(n,sizeof(int));
if(ptr==NULL) 
{
printf("¡Error! memoria no reservada,");
exit(0);
}
promedio=fopen("promedio.txt","r");
for (i=0;i<n;i++){
fscanf(promedio,"%lf\n",&numeros[i]);
}
fclose(promedio);
for (i=0;i<n;i++){
sumatorio+=numeros[i];
}
for(i=0;i<n;i++){
resultados[i]=(pow,(numeros[i]-a),2);
sumatorio2+=resultados[i];
}

a=(sumatorio)/n;
b=sqrt(sumatorio2/n-1);
printf("El promedio es:%lf\n",a);
printf("La desviación estándar es:%lf\n",b);
free(ptr);
return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main () 
{
int n=267,i,*ptr,suma=0;
promedio=fopen("promedio.txt","r");
for (i=0;i<n;i++){
fscanf(promedio,"%lf\n",&numeros[i]);
}
fclose(promedio);
ptr=(int*) calloc(numero,sizeof(int));
if(ptr==NULL) 
{
printf("¡Error! memoria no reservada,");
exit(0);
}
printf("Introduce los elementos del arreglo:\n");
for (i=0;i<numero;i++) 
{
scanf("%i",ptr+i);
suma+=*(ptr+i);
}
printf("suma=%i",suma);
free(ptr);
return 0;
}





































