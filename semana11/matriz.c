#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (int arg, char*argv[]) {
printf("El progama que estás ejecutando es: %s\n",argv[0]);
float T1,T2,T3,T4;
int n;
char *fuck;
FILE *resultats;
if(arg==7) {
n=atoi(argv[1]);
T1=atof(argv[2]);
T2=atof(argv[3]);
T3=atof(argv[4]);
T4=atof(argv[5]);
fuck=argv[6];
printf("El nombre del archivo con el que está trabajando es: %s \t  \n",argv[6]);
resultats=fopen(fuck,"w");
n=n*n;
fprintf(resultats,"T1 =%f \n",T1);
fprintf(resultats,"T2 =%f \n",T2);
fprintf(resultats,"T3 =%f \n",T3);
fprintf(resultats,"T4 =%f \n",T4);
fprintf(resultats,"El número de puntos es:%i \n",n);
fclose(resultats);
}

else if(arg<7) {
printf("No dio suficientes argumentos\n");
}
else if (arg>7) {
printf("Dio más argumentos de los necesarios\n");
}
return 0;
}

