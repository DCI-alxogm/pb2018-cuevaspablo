//Este es el segundo proyecto parcial, cuyo objetivo es encontrar la temperatura en cada punto en una placa//
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (int arg, char*argv[]) {
printf("El progama que estás ejecutando es: %s\n",argv[0]);
float T1,T2,T3,T4,epsilon1,epsilon2;
char *resultados1;
FILE *results;
int i,j,n;
if (arg==8){
n=atoi(argv[1]);
T1=atof(argv[2]);
T2=atof(argv[3]);
T3=atof(argv[4]);
T4=atof(argv[5]);
epsilon1=atof(argv[6]);
resultados1=argv[7];
n=n+2;
float T[n][n];
float To[n][n];
printf("El nombre del archivo con el que está trabajando es: %s \t  \n",argv[7]);
printf ("%f %f %f %f \n",T1,T2,T3,T4);
for(i=0;i<n;i++) {
for(j=0;j<n;j++){
T[i][j]=0;
To[i][j]=0;
}
}
for(i=1;i<n-1;i++) {
T[i][0]=T1;
T[i][n-1]=T3;
}
for(j=1;j<n-1;j++){
T[0][j]=T2;
T[n-1][j]=T4;
}
do {
results = fopen(resultados1,"w");


for(j=1;j<n-1;j++){
for(i=1;i<n-1;i++) {
T[i][j]=(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4;
T[i][j]=(T[i][j]*1.5)+((1-1.5)*To[i][j]);

epsilon2=0;
if(sqrt(pow((((T[i][j]-To[i][j])/(To[i][j]))*100),2))>epsilon2){
epsilon2=sqrt(pow((((T[i][j]-To[i][j])/(To[i][j]))*100),2));
}
To[i][j]=T[i][j];
fprintf(results,"%f\t",T[i][j]);
}
fprintf(results,"\n");
}

fclose(results);
}
while(epsilon2>epsilon1);
}

else if(arg<8) {
printf("No hay suficientes argumentos \n");
}
else if(arg>8) {
printf("Dio demasiados argumentos\n");
}
return 0;
}

