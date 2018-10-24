//Este es el segundo proyecto parcial, cuyo objetivo es encontrar la temperatura en cada punto en una placa//
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void funcion();
int main (int arg, char*argv[]) {
printf("El progama que estás ejecutando es: %s\n",argv[0]);
float T1,T2,T3,T4;
char *resultados;
FILE *results;
int i,j,n,p,k;
float T[n][n];
if (arg==8){
p=atoi(argv[1]);
n=atoi(argv[2]);
T1=atof(argv[3]);
T2=atof(argv[4]);
T3=atof(argv[5]);
T4=atof(argv[6]);
resultados=argv[7];
printf("El nombre del archivo con el que está trabajando es: %s \t  \n",argv[7]);
results = fopen(resultados,"w");
n=n*n;
fprintf(results,"T1 = %f \n",T1);
fprintf(results,"T2 = %f \n",T2);
fprintf(results,"T3 = %f \n",T3);
fprintf(results,"T4 = %f \n",T4);
fprintf(results,"El número de puntos es:%i \n",n);
fprintf(results,"T1:%f \t T2:%f \t T3:%f \t  T4:%f \t n:%i \t",T1,T2,T3,T4,n,T[i][j]);
fprintf(results,"%f\t %f\t  %f\t %f\t \n",T[i+1][j],T[i-1][j],T[i][j+1]);
}
fclose(results);
}
else if(arg<8) {
printf("No hay suficientes argumentos \n");
}
else if(arg>8) {
printf("Dio demasiados argumentos\n");
}
return 0;
}
void funcion()
{
int n,p,i,j,k;
float T1,T2,T3,T4;
float T[n][n];
for(k=0;k<p;k++) {
for(i=0;i<p;i++) {
for(j=0;j<p;j++) {
T[i+1][j]=0;
T[i-1][j]=0;
T[i][j+1]=0;
T[i][j-1]=0;
T[i][j]=((T[i+1][j])+(T[i-1][j])+(T[i][j+1])+(T[i][j-1]))/(4);
}
}
T[i+1][j]=T1+T[i+1][j];
T[i-1][j]=T2+T[i-1][j];
T[i][j+1]=T3+T[i][j+1];
T[i][j-1]=T4+T[i][j-1];
}
