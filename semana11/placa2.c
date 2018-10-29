//Realizado por José Pablo Cuevas Cázares el 29/10/18. Esta es la función principal del programa, en la cual se asignan los valores iniciales a la matriz, y después de incluye la función de resultados en el mismo.
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
//Aquí se declaran todas las variable y se abren dos archivos, uno de donde se leen los datos y uno donde se guardan.     
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
