/*En este programa se ejemplificará el uso de los arreglos en c. Aquí se realizaron tres ejemplos y se hará otro programa con otro ejemplo*/
#include<stdio.h>
int main() 
{
int i,n=10;
float numeros[i];
for (i=0;i<n;i++) {
scanf("%f",&numeros[i]);
numeros[i]*=2; // Multiplica el entero dado por dos.
printf("%f\n",numeros[i]); // Imprime el valor del arreglo modificado
} 
return 0;
}
