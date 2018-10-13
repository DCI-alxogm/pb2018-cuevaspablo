#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main () 
{
FILE* promedio;
int n,i;
double *ptr,y,z,sumatorio=0,sumatorio2=0;
printf("Introduce el número de elementos:");
scanf("%i",&n);
ptr=(double*) calloc(n,sizeof(int));
if(ptr==NULL) 
{
printf("¡Error! memoria no reservada,");
exit(0);
}
promedio=fopen("promedio.txt","r");
for (i=0;i<n;i++){
fscanf(promedio,"%lf\n",(ptr+i));
sumatorio+=*ptr+i;
}
fclose(promedio);
y=(sumatorio)/n;
promedio=fopen("promedio.txt","r");
for (i=0;i<n;i++){
fscanf(promedio,"%lf\n",(ptr+i));
sumatorio2+=pow(((*(ptr+i))-y),2);
}
fclose(promedio);
printf("La media aritmética de los datos es:%lf\n",y);
printf("La desviación estándar de los datos es: %f\n",z);
free(ptr);
return 0;
}


