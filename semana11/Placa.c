//Este es el segundo proyecto parcial, cuyo objetivo es encontrar la temperatura en cada punto en una placa//
#include<stdio.h>
#include<math.h>
#include<stdlbi.h>

int main (int arg, char*argv[]) {
printf("El progama que estás ejecutando es: %s\n",argv[0]);
char *resultados;
FILE *temperaturas;
FILE *resultados;
int i,j,n,p;
float matriz[n][n];
if (arg==7){
n=atoi(argv[1]);
T1=atof(argv[2]);
T2=atof(argv[3]);
T3=atof(argv[4]);
T4=atof(argv[5]);
resultados=atof(argv[6]);
temperaturas = fopen("temperaturas.txt","r");
for(i=0;i<n;i++) {
for(j=0;j<n;j++) {
fscanf(temperaturas,"%f",&matriz[i][j]);
}
}
fclose(temperaturas);
resultados=fopen("resultados.txt","w");
for(i=0;i<n;i++) {
for(j=0;j<n;j++) {
fprintf(resultados,"%f",matriz[i][j]);
}
printf("\n");
}
fclose(resultados);
}
else if(arg<7) {
printf("No hay suficientes argumentos \n");
}
else if(arg>7) {
printf("Dio demasiados argumentos\n");
}
return 0;
}
