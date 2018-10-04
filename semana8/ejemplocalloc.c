#include<stdio.h>
#include<stdlib.h>
int main () 
{
int numero,i,*ptr,suma=0;
printf("Introduce el número de elementos:");
scanf("%i",&numero);
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
