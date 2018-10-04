#include<stdio.h>
int main () 
{
int max=3;
int var[3]= {10,100,200};
int i, *ptr;
/*En este paso se le asigna la dirección del arreglo al apuntador*/
ptr=&var;

for (i=0;i<max;i++) {
printf("La dirección de la variable var[%i] = %x\n",i,ptr);
printf("Valor de la variable var[%i]=%i\n",i,ptr);
/*En este paso se mueve a la siguiente posición de la memoria*/
ptr++;
}
return 0;
}
