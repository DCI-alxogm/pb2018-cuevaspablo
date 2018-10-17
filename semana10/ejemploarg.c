#include<stdio.h>
int main (int argc, char *argv[]) 
{
printf("El programa que estás ejecutando es :%s \n",argv[0]);
if (argc==2) {
printf("El argumento que se dio es: %s\n",argv[1]);
}
else if (argc>2){
printf("Más argumentos de los necesarios \n");
}
else {
printf("Se requiere al menos un argumento \n");
}
return 0;
}

