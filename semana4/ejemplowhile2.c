/*Este es el segundo programa ejemplo que utiliza el comando while*/
#include<stdio.h>
int main()
{
float TempC, TempK;
float inicial=100,final=200,delta;
int n=10;
int op=1;
delta=(final-inicial)/n;
while (op==1){
TempK=0.;
TempC=inicial;
while (TempC<=final){
TempK=TempC+273.15;
printf("%f %f\n",TempC,TempK);
TempC=TempC+delta;   //TempC=delta;
}
printf("¿Quiere realizar otra operación?. Presiona 1 para sí, presiona 2 para no\n");
scanf("%i",&op);
}
return 0;
}
