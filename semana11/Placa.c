//Realizado por José Pablo Cuevas Cázares el 29/10/18, primer intento de proyecto de segundo parcial 

//Este código lo hice como un extra, ya que aunque sí calculaba los valrores de la temperatura de manera correcta, no logré hacerlo funcionar con funciones, por lo que lo dejo aquí como un extra.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (int arg, char*argv[]) {
printf("El progama que estás ejecutando es: %s\n",argv[0]);
float T1,T2,T3,T4,epsilon1,epsilon2;
char *resultadosPlaca;
FILE *results;
int i,j,n;
//Las funciones atoi y atof se utilizan para cambiar una variable caracter a una variable entera o flotante.
if (arg==8){
n=atoi(argv[1]);
T1=atof(argv[2]);
T2=atof(argv[3]);
T3=atof(argv[4]);
T4=atof(argv[5]);
epsilon1=atof(argv[6]);
resultadosPlaca=argv[7];
//Se asginan los valores de los argumentos a cada variable utilizada en el programa.
n=n+2;
float T[n][n];
float To[n][n];
//Se declara el arreglo de tamaño [n][n] después de que sea declarado n, con el fin de evitar un segmentation fault.
printf("El nombre del archivo con el que está trabajando es: %s \t  \n",argv[7]);
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
//En este apartado se inicializan todos los puntos de la placa a cero, exceptuando por supuesto a los puntos de las orillas, los cuales son asignados a las temperaturas que le da el usuario, con base en las coordenadas de cada punto.
do {
results = fopen(resultadosPlaca,"w");
for(j=1;j<n-1;j++){
for(i=1;i<n-1;i++) {
T[i][j]=(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4;
T[i][j]=(T[i][j]*1.5)+((1-1.5)*To[i][j]);
//En este apartado se calcula el promedio de un punto con base en los valores de las temperaturas en sus cercanías, y también se realiza el ajuste con la ecuación utilizada en el libro.
epsilon2=0;
if(sqrt(pow((((T[i][j]-To[i][j])/(To[i][j]))*100),2))>epsilon2){
epsilon2=sqrt(pow((((T[i][j]-To[i][j])/(To[i][j]))*100),2));
}
To[i][j]=T[i][j];
//En este apartado se calcula epsilon2, y se establece una condición para saber si es mayor que el epsilon dado por el usuario, lo cual se dejará de cumplir hasta que epsilon2 sea mayor que epsilon1.
fprintf(results,"%f\t",T[i][j]);
}
//Se imprimen los valores de cada punto.
fprintf(results,"\n");
}

fclose(results);
}
//Se cierra el archivo. 
while(epsilon2>epsilon1);
}

else if(arg<8) {
printf("No hay suficientes argumentos \n");
}
else if(arg>8) {
printf("Dio demasiados argumentos\n");
}
return 0;
}

