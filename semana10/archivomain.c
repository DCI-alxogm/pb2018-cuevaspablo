#include<stdio.h>
int main (int arg, char*argv[]) {
printf("El progama que estás ejecutando es: %s\n",argv[0]);
char *datos;
FILE *data;
if(arg==2) {
datos=argv[1];
printf("El nombre del archivo a abrir es: %s \n",datos);
data=fopen(datos,"w");
//En este apartado se pone todo lo que se haría con los datos del archivo//
fclose(data);
}
else if(arg>2){
printf("Más argumentos de los necesarios \n");
}
else {
printf("Se requiere al menos un argumento\n");
}
return 0;
}
