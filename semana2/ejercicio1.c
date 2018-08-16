/*Creado el quince de agosto por pablo cuevas*/
#include<stdio.h>
int main()
{
int edad,edad2;
char nombre[20];
printf("Hola Pablo \n");
printf("Este es el programa edad \n");
printf("Introduce tu nombre \n");
scanf("%s", &nombre);
printf("Introduce tu edad: \n");
scanf("%i", &edad);
(edad2=edad+10);
printf("\n Tu nombre es: %s",nombre);
printf("\nTu edad es: %i \n",edad2);
return 0;
}
