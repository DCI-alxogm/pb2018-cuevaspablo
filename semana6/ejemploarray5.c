/*En este programa se ejemplificará el uso de los arreglos en c. Este es el quinto programa ejemplo de los arreglos*/
#include<stdio.h>
int main() 
{
int i,j,n;
printf("De el número de elementos para trabajar\n");
scanf("%i",&n);
float numeros[n]; // ésta no es la forma óptima de hacer una reserva de memoria dinámica.
for (j=0;j<n;j++){
scanf("%f",&numeros[j]);
numeros[j]*=2;
printf("%f\n",numeros[j]);
}
return 0;
}
