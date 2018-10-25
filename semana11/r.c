#include<stdio.h>
void funcion()
{
int n,p,i,j,k;
float T1,T2,T3,T4;
float T[100][100];
for(k=0;k<n;k++) {
for(i=0;i<n;i++) {
for(j=0;j<n;j++) {
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
}
