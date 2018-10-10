//Este programa utiliza apuntadores para encontrar el número máximo dentro de un conjunto de datos, los cuales son leídos a partir de un archivo//
#include<stdio.h>

int main () 
{
FILE* numeros;

int n=100,i;
double array[n];
numeros=fopen("num_maximo.txt","r");
for (i=0;i<n;i++)
{
fscanf(numeros,"%lf \n",&array[i]);
}




return 0;
}
