//Este es el segundo proyecto parcial, cuyo objetivo es encontrar la temperatura en cada punto en una placa//
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (int arg, char*argv[]) {
printf("El progama que estás ejecutando es: %s\n",argv[0]);
float T1,T2,T3,T4;
char *resultados;
FILE *results;
int i,j,n,p;
if (arg==7){
n=atoi(argv[1]);
T1=atof(argv[2]);
T2=atof(argv[3]);
T3=atof(argv[4]);
T4=atof(argv[5]);
resultados=argv[6];
p=n*n;
scanf("%i",&p);
printf("El nombre del archivo con el que está trabajando es: %s \t  \n",argv[6]);
float T[20][20];
results = fopen(resultados,"w");

fprintf(results,"T1:%f \t T2:%f \t T3:%f \t  T4:%f \t número de puntos:%i \t \n",T1,T2,T3,T4,n);
for(i=0;i<p;i++) {
for(j=0;j<p;j++) {
T[i][j]=0;
T[i+1][j]=0.0;
T[i-1][j]=0.0;
T[i][j+1]=0.0;
T[i][j-1]=0.0;
T[i][j]=((T[i+1][j])+(T[i-1][j])+(T[i][j+1])+(T[i][j-1]))/(4);
}

T[i+1][j]=T1+T[i+1][j];
T[i-1][j]=T2+T[i-1][j];
T[i][j+1]=T3+T[i][j+1];
T[i][j-1]=T4+T[i][j-1];
fprintf(results,"%f\t %f\t  %f\t  %f\t  \n",T[i+1][j],T[i-1][j],T[i][j+1],T[i][j-1]);
}
fclose(results);
}

else if(arg<7) {
printf("No hay suficientes argumentos \n");
}
else if(arg>7) {
printf("Dio demasiados argumentos\n");
}
return 0;
}

