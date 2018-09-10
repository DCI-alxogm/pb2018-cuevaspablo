/*En este programa se ejemplificará el uso de los arreglos en c. Aquí se realizaron tres ejemplos y se hará otro programa con otro ejemplo*/
#include<stdio.h>
int main() 
{
int i,n=10;
float numeros[i];

for (i=0;i<n;i++) {
numeros[i]=0; 
}

for (i=0;i<n;i++) {
scanf("%f\n",&numeros[i]);
}

for (i=0;i<n;i++) {
printf("%f\n",numeros[i]); 
}

return 0;
}

