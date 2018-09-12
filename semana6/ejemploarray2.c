/*En este programa se ejemplificará el uso de los arreglos en c. Aquí se realizó el ejemplo cuatro, para multiplicar un arreglo*/
#include<stdio.h>
int main() 
{
int i,n=10;
float numeros[n];
for (i=0;i<n;i++) {
scanf("%f",&numeros[n]);
numeros[n]*=2; // Multiplica el entero dado por dos.
printf("%f\n",numeros[n]); // Imprime el valor del arreglo modificado
} 
return 0;
}
