#include <stdio.h>
#include<math.h>
#include<stdlib.h>
//Esta función opera los resultados que son necesitados en la función main
void resultados(float epsilon1) //En esta parte se le da como argumento a la función resultados el epsilon leído a partir de un archivo
{
int z=0;
float epsilon2;
char prenom[20];
FILE *results;
FILE *inicial;
FILE *data;
int i,j,n;
//Aquí se declaran todas las variables, así como los archivos, uno para leer n, otro para abrir el archivo inicial del cual se toman los valores de la matriz para las orillas y otro más llamado data, para imprimir los resultados del archivo
data=fopen("datos.txt","r");
fscanf(data,"%i",&n);
fclose(data);
n=n+2;
//Escaneo y asginación de n
float T[n][n];
float To[n][n];
//Declaración de los arreglos de tamaño [n][n]
inicial = fopen("inicial.txt","r");

for(j=0; j<n; j++)
{
for(i=0; i<n; i++)
{
fscanf(inicial,"%f \n",&T[i][j]);
}
}
fclose(inicial);
//En este for se escanean todos los datos impresos en el archivo, acción que se realizó en la función main
do {
for(j=1;j<n-1;j++){
for(i=1;i<n-1;i++) {
T[i][j]=(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4;
//Se calcula el promedio de un punto en la placa
T[i][j]=(T[i][j]*1.5)+((1-1.5)*To[i][j]);
//Tomando la ecuación del libro, aquí se hace un ajuste de la temperatura tomada
epsilon2=0;
//Se inicializa epsilon2 en cero, para que pueda ir tomando valores hasta que no se cumpla la condición establecida por el while
if(sqrt(pow((((T[i][j]-To[i][j])/(To[i][j]))*100),2))>epsilon2){
epsilon2=sqrt(pow((((T[i][j]-To[i][j])/(To[i][j]))*100),2));
}
To[i][j]=T[i][j];
}
//En este apartado se le da un valor a epsilon
}
//En este for se realizan todas las operaciones de la temperatura, tomando los valores que fueron escaneados en el archivo inicial
sprintf(prenom,"%iresultados.txt",z);
results= fopen(prenom,"w");
if(z%45==0){
for(j=1;j<n-1;j++){
for(i=1;i<n-1;i++) {
fprintf(results,"%f\t",T[i][j]);
}
fprintf(results,"\n");
}
z=z+1;
}
fclose(results);
}
//En esta sección es cuando se imprimen los resultados en muchos archivos
while(epsilon2>epsilon1);//Lo que está dentro del while se realizará hasta que el epsilon nuevo sea mayor que el que fue dado por el usuario
}




