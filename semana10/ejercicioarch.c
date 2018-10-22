#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main (int arg, char*argv[]) {
printf("El progama que estás ejecutando es: %s\n",argv[0]);
char *trigo;
FILE *valores;
float csc,sec,x;
int i,n;
double pi=3.14152926535;
if(arg==4) {
n=atoi(argv[1]);
x=atof(argv[2]);		
trigo=argv[3];
printf("El nombre del archivo con el que está trabajando es: %s \t %s \n",argv[3],trigo);
valores= fopen(trigo,"w");
fprintf(valores,"x:%f \t csc:%f \t sec:%f \t",x,sec,csc);
for(i=0;i<n;i++) {
sec=(1/(cos(x*(pi/180))));
csc=(1/(sin(x*(pi/180))));
fprintf(valores,"%f\t %f\t  %f\t \n",x,sec,csc);
x++;
}
fclose(valores);
}
else if(arg>4){
printf("Dio más argumentos de los necesarios\n");
}
else{
printf("Es requerido que de al menos 1 argumento \n");
}
return 0;
}
