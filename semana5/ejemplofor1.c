/*Este es el primer programe ejemplo en el que uso la función for*/
#include<stdio.h>
int main ()
{
float tempC,tempK;
float TempC=100, final=200, delta;
int n,i,z=1,l;
while (z==1){
delta=(final-TempC)/n;
printf("Defina el número de pasos\n");
scanf("%i",&n);
for (i=0;i<n;i++){
tempK=tempC+273.15;
printf("%f\n",tempC);
printf("%f\n",tempK);
tempC=tempC+delta; // tempC+=delta;
}
printf("¿Desea realizar otra operación?. Presione 0 para no y 1 para sí\n");
scanf("%i",&z);
}
return 0;
}
