//Este programa utiliza apuntadores para encontrar el número máximo dentro de un conjunto de datos, los cuales son leídos a partir de un archivo//
#include<stdio.h>
#include<stdlib.h>

int main () 
{

int n,i;
float *ptr,nummayor;
FILE* data;
printf("Introduce el número de elementos:");
scanf("%i",&n);
ptr=(float*) calloc(n,sizeof(int));
if(ptr==NULL) 
{
printf("¡Error! memoria no reservada,");
exit(0);
}
data=fopen("num_maximo.txt","r");
for (i=0;i<n;i++){
fscanf(data,"%f\n",(ptr+i));
if(nummayor< *(ptr+i)){
nummayor=*(ptr+i);
}
}
fclose(data);
printf("El número más grande del conjunto de datos es:%f \n",nummayor);

free(ptr);
return 0;
}
