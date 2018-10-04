#include<stdio.h>
#include<stdlib.h>
int main () 
{
int numero, i, *ptr, suma=0;
ptr = (int*) malloc(numero*sizeof(int)); /*En este apartado se reserva la memoria utilizando malloc*/
printf("Introduce el número de elementos:");
scanf("%i",&numero);
if (ptr==NULL) 
{
printf("¡Error! memoria no reservada,");
exit(0);
}
printf("Introduce los elementos del arreglo:\n");
for (i=0;i<numero;i++) 
{
scanf("%i",ptr+1);
suma+=*(ptr+i);
}
printf("suma=%i \n",suma);
free(ptr);
return 0;
}
