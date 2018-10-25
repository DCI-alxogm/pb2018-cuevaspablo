#include<stdio.h>
void funcion(){
float T1,T2,T3,T4;
int i,j,n;
float T[n][n];
float To[n][n];
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
}
