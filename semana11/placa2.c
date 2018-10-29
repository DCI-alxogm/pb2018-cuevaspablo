#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void resultados(float epsilon1);
int main (){
float T1,T2,T3,T4,epsilon1;
FILE *data;
FILE *inicial;
int i,j,n;     
data=fopen("datos.txt","r");
fscanf(data,"%i",&n);
fscanf(data,"%f",&T1);
fscanf(data,"%f",&T2);
fscanf(data,"%f",&T3);
fscanf(data,"%f",&T4);
fscanf(data,"%f",&epsilon1);
fclose(data);
n=n+2;
float T[n][n];
float To[n][n];
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
inicial=fopen ("inicial.txt","w");
for(j=0; j<n; j++)
{
for(i=0; i<n; i++)
{
fprintf(inicial,"%f \n",T[i][j]);
}
}

fclose(inicial);
resultados(epsilon1);

return 0;
}
