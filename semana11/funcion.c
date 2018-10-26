#include<stdio.h>
double funcion(){
float T1,T2,T3,T4;
int i,j,n;
float T[n][n];
float To[n][n];
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
}
