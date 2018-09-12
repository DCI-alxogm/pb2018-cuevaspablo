/*Este programa ejemplifica cómo se crea un archivo, es el primer programa ejemplo*/
#include<stdio.h>
int main() {
FILE*archivo;
float var1,var2;
char var[255];
//ESCRITURA
archivo = fopen("test.txt","w");
fputs("Esta es una pruebade fputs...\n",archivo);
fprintf(archivo,"fprintf...\n");
var1=0.15;
var2=100.8;
fprintf(archivo,"%f %f\n",var1,var2);
fclose(archivo);

return 0;
}
