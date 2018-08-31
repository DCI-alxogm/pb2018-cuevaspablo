

#include<stdio.h>
int main()
{
float TempC,TempK;
float inicial=100,final=200,delta;
int n=10;
char op[2];
op[0]='s';
delta=(final-inicial)/n;
while(op[0]=='s'){
TempK=0.;
TempC=inicial;
while (TempC<=final){
TempK=TempC+273.15;
printf("%f %f \n",TempC,TempK);
TempC=TempC+delta;   // TempC+=delta;
}
printf("¿Deseas hacer otra operación?(Sí/No)\n");
scanf("%s",op);
}
return 0;
}
