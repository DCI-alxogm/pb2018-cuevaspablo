/*En este programa se ejemplifica la posiblidad de realizar ciclos anidados con la función for. Es el tercer ejemplo de for de la semana5*/
#include<stdio.h>
#include<math.h>
int main()
{
float res;
int n=3,k,j;
for(j=0;j<n;j++){
for(k=0;k<n;k++){
res=j*k*1.0;
printf("%i %i %f\n",j,k,res);
}
} 
return 0;
}
