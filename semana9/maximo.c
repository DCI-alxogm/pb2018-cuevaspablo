//Este programa utiliza apuntadores para encontrar el número máximo dentro de un conjunto de datos, los cuales son leídos a partir de un archivo//
#include<stdio.h>
#include<stdlib.h>
int main () 
{
FILE* numeros;
FILE* resultado;

int n=100,i;
double array[n];
numeros=fopen("num_maximo.txt","r");
for (i=0;i<n;i++)
{
fscanf("%lf \n",&array[n]);
}
fclose(numeros);
resultado=fopen("numeros.txt","w");
fprintf("%lf \n",array[n]);
fclose(resultado);



return 0;
}
