#include<stdio.h>
int main()
{
int var=20; //Aquí se declara la variable//
int *ip; //Se declara la variable apuntador//
ip=&var; //Asigna la dirección de la variable var al apuntador ip//
printf("La dirección de la variable var es:%x\n",(int)&var);
printf("Dirección guardad en el apuntador ip: %x\n",(int) ip);
printf("El valor de *ip es: %d\n",*ip);
return 0;
}

