#include <stdio.h>
#include<math.h>
#include<stdlib.h>

void resultados()
{
  float T1,T2,T3,T4,epsilon1,epsilon2;
FILE *results;
FILE *inicial;
FILE *data;
int i,j,n;
float a,b,c,d,e,f,g;
data=fopen("datos.txt","r");
fscanf(data,"%i",&n);
fclose(data);
n=n+2;
float T[n][n];
float To[n][n];
inicial = fopen("inicial.txt","r");
fscanf(inicial,"%f",&a);
fscanf(inicial,"%f",&b);
fscanf(inicial,"%f",&c);
fscanf(inicial,"%f",&d);
fscanf(inicial,"%f",&e);
fscanf(inicial,"%f",&f);
fscanf(inicial,"%f",&g);
fclose(inicial);
T[i][j]=a;
To[i][j]=b;
T[i][0]=c;
T[i][n-1]=d;
T[0][j]=e;
T[n-1][j]=f;
epsilon1=g;
do {
results = fopen("resultados.txt","w");


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
