#include<stdio.h>
#include<math.h>
void trigo (){
int n,i;
float x,seno,coseno,tangente,sec,csc,cot;
double pi=3.14152926535;
int main (int arg, char*argv[]) {
printf("El progama que estás ejecutando es: %s\n",argv[0])
n=atoi(argv[1]);
x=atof(argv[2]);
if(arg==3) {
printf(valores,"x:%f \t sin:%f \t cos:%f \t tan:%f \t sec:%f \t csc:%f \t cot: %f \t",x,seno,coseno,tangente,sec,csc,cot);
for(i=0;i<n;i++) {
seno=(sin(x*(pi/180));
coseno=(cos(x*(pi/180));
tangente=(tan(x*(pi/180));
sec=(1/coseno);
csc=(1/seno);
cot=(1/tangente);
printf(valores,"%f\t %f\t  %f\t %f\t %f\t %f\t  \n",x,seno,coseno,tangente,sec,csc,cotangente);
x++;
}
}
else if(arg>3){
printf("Dio más argumentos de los necesarios\n");
}
else{
printf("Es requerido que de al menos 1 argumento \n");
}
}
