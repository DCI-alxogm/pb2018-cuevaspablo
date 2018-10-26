#include<stdio.h>
void funcion(){
float T1,T2,T3,T4;
int i,j,n;
float T[n][n];
float To[n][n];
FILE *results;
results = fopen("resultados.txt","w");
for(i=1;i<n;i++) {
for(j=1;j<n;j++){

T[i][j]=(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4;

fprintf(results,"%f\t",T[i][j]);
}
fprintf(results,"\n");
}
fclose(results);
}
