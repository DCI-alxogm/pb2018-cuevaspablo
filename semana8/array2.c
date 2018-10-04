#include<stdio.h>
#include<stdlib.h>
int main ()
{
int i,suma=0,*numero;
printf("Introduce seis números enteros:\n");
numero = (int*) malloc(*numero*sizeof(int));
for(i=0;i<6;i++)
{
// (numero+i) es equivalente a &numero[i]//
scanf("%i",&numero[i]);
// *(numero+i) es equivalente a numero[i]//
suma+=numero[i];
}
printf("suma=%i\n",suma);
return 0;
}

