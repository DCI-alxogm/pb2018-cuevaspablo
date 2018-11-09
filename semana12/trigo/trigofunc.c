#include<stdio.h>
#include<math.h>
#include "trigomake.h"
void trigo () {
int n,i,x;
float seno,coseno,tangente,sec,csc,cot;
double pi=3.14152926535;
FILE *data;
data = fopen("data.txt","r");
fscanf(data,"%i",&x);
fscanf(data,"%i",&n);
fclose(data);
n=n+1;
printf("x: \t sin:\t cos:\t tan:\t sec:\t csc:\t cot:\t \n");
for(i=0;i<n;i++) {
seno=(sin(x*(pi/180)));
coseno=(cos(x*(pi/180)));
tangente=(tan(x*(pi/180)));
sec=(1/coseno);
csc=(1/seno);
cot=(1/tangente);
printf("%i \t%f\t  %f\t %f\t %f\t %f\t \n",x,seno,coseno,tangente,sec,csc,cot);
x++;
}
}
