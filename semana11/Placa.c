//Este es el segundo proyecto parcial, cuyo objetivo es encontrar la temperatura en cada punto en una placa//
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (int arg, char*argv[]) {
printf("El progama que estás ejecutando es: %s\n",argv[0]);
float T1,T2,T3,T4;
char *resultados;
FILE *results;
int i,j,n;
if (arg==7){
n=atoi(argv[1]);
T1=atof(argv[2]);
T2=atof(argv[3]);
T3=atof(argv[4]);
T4=atof(argv[5]);
resultados=argv[6];
float T[n][n];
float To[n][n];
printf("El nombre del archivo con el que está trabajando es: %s \t  \n",argv[6]);
results = fopen(resultados,"w");

for(i=0;i<n;i++) {
for(j=0;j<n;j++){
T[i][j]=0;
To[i][j]=0;
}
}

for(i=0;i<n;i++) {
   for(j=0;j<n;j++){
   T[0][0]=T1;
    T[i+1][0]=T2;
     T[0][j+1]=T3;
      T[i+1][j+1]=T4;
                 }
                   } 
printf("%f %f %f %f \n",T[0][0],T[i+1][0],T[0][j+1],T[i+1][j+1]);

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

