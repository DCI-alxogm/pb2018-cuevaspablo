/*Este es el primer programa en el que utilizamos la opción "switch"*/
#include<stdio.h>
int main()
{
int opcion;
printf("Teclea una opción \n");
printf("(1) para convertir temperaturas\n");
printf("(2) para convertir coordenadas \n");
scanf("%i",&opcion);
switch(opcion)
{
case 1:
printf("Entre a la opción 1\n");
break;
case 2:
printf("Entre a la opción 2\n");
break;

default:
printf("Opción inválida\n");
break;
}
}
