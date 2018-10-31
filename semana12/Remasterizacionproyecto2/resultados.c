//Realizado por José Pablo Cuevas Cázares el 29/10/18, función la cual sirve para calcular los resutlados del proyecto de segundo parcial.
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
//Esta función opera los resultados que son necesitados en la función main.
void resultados(float epsilon1) //En esta parte se le da como argumento a la función resultados el epsilon leído a partir de un archivo.
{
int z=0,epsilon3=0;
float epsilon2;
char prenom[20];
FILE *results;
FILE *inicial;
FILE *data;
int i,j,n;
//Aquí se declaran todas las variables, así como los archivos que se necesitarán en el proyecto. Uno para leer n, otro para abrir el archivo inicial del cual se toman los valores de la matriz para las orillas y otro más llamado data, para imprimir los resultados del archivo.
data=fopen("datos.txt","r");
fscanf(data,"%i",&n);
fclose(data);
n=n+2;
//Escaneo y asginación de n.
float T[n][n];
float To[n][n];
//Declaración de los arreglos de tamaño [n][n].
inicial = fopen("inicial.txt","r");

for(j=0; j<n; j++)
{
for(i=0; i<n; i++)
{//Realizado por José Pablo Cuevas Cázares el 29/10/18. Esta es la función principal del programa, en la cual se asignan los valores iniciales a la matriz, y después de incluye la función de resultados en el mismo.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//Esta es la función principal//
void resultados(float epsilon1);//Aquí introduzco la función de resultados, la cual tiene como argumento el epsilon que el usuario da.
int main (){
float T1,T2,T3,T4,epsilon1;
FILE *data;
FILE *inicial;
int i,j,n;
//Aquí se declaran todas las variable y se abren dos archivos, uno de donde se leen los datos y uno donde se guardan.     https://github.com/DCIPB2018/pb2018-cuevaspablo.git
data=fopen("datos.txt","r");
fscanf(data,"%i",&n);
fscanf(data,"%f",&T1);
fscanf(data,"%f",&T2);
fscanf(data,"%f",&T3);
fscanf(data,"%f",&T4);
fscanf(data,"%f",&epsilon1);
fclose(data);
//lectura de datos a partir del archivo declarado.
n=n+2; //Se le suma al número de columnas un dos para que se tomen las dos columnas de la matriz.
float T[n][n];
float To[n][n];
//Es importante declarar las matrices de tamaño [n][n] después de haber declarado n, lo cual se hace leyendo los datos a partir de un archivo.
for(i=0;i<n;i++) {
for(j=0;j<n;j++){
T[i][j]=0;
To[i][j]=0;
//En este for se asignan todos los puntos de la placa/matriz con cero, así como la temperatura vieja, la cual será útil para la parte de operaciones.
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
//En este apartado se igualan las temperaturas de cada lado con su correspondiente temperatura que fue leída a partir del archivo.
inicial=fopen ("inicial.txt","w");
for(j=0; j<n; j++)
{
for(i=0; i<n; i++)
{
fprintf(inicial,"%f \n",T[i][j]);
}
}
//En este for se imprimen los valores de los puntos de las orillas, los cuales tienen el valor de las temperaturas leídas a partir del archivo.
fclose(inicial);
resultados(epsilon1);
//En esta parte se "llama" o inicializa la función resultados para que sea parte del programa principal.
return 0;
}
fscanf(inicial,"%f \n",&T[i][j]);
}
}
fclose(inicial);
//En este for se escanean todos los datos impresos en el archivo, acción que se realizó en la función main.
do {
for(j=1;j<n-1;j++){https://github.com/DCIPB2018/pb2018-cuevaspablo.git
for(i=1;i<n-1;i++) {
T[i][j]=(T[i+1][j]+T[i-1][j]+T[i][j+1]+T[i][j-1])/4;
//Se calcula el promedio de un punto en la placa.
T[i][j]=(T[i][j]*1.5)+((1-1.5)*To[i][j]);
//Tomando la ecuación del libro, aquí se hace un ajuste de la temperatura tomada.
epsilon2=0;
//Se inicializa epsilon2 en cero, para que pueda ir tomando valores hasta que no se cumpla la condición establecida por el while.
if(sqrt(pow((((T[i][j]-To[i][j])/(To[i][j]))*100),2))>epsilon2){
epsilon2=sqrt(pow((((T[i][j]-To[i][j])/(To[i][j]))*100),2));
}
To[i][j]=T[i][j];
}
//En este apartado se le da un valor a epsilon.
}
//En este for se realizan todas las operaciones de la temperatura, tomando los valores que fueron escaneados en el archivo inicial.
sprintf(prenom,"%iresultados.txt",z);
	if(epsilon2>epsilon1 && z%5==0){
	results=fopen(prenom,"w");
	}
	else{
	results=fopen("balance.txt","w");
	}

	for(j=1;j<n-1;j++){
		for(i=1;i<n-1;i++){
			fprintf(results,"%f\t",T[i][j]);
		}
		fprintf(results,"\n");
	}
fclose(results);
z=z+1; 
}
//En esta sección es cuando se imprimen los resultados en muchos archivos.
while(epsilon2>epsilon1 && epsilon3<3100);
//Lo que está dentro del while se realizará hasta que el epsilon nuevo sea mayor que el que fue dado por el usuario.
}




