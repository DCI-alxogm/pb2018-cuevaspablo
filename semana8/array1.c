#include<stdio.h>
int main ()
{
int i,numero[6],suma=0;
printf("Introduce seis números enteros:\n");
for(i=0;i<6;i++) 
{
//(numero+i) es equivalente a escribir &numero[i]//
scanf("%i",(numero+i));
//*(numero+i) es equivalente a numero[i]//
suma+=*(numero+i);
}
printf("suma=%i\n",suma);
return 0;
}

