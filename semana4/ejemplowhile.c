/*En este programa se ejemplifica el uso del comando while*/
#include<stdio.h>
int main()
{
float TempC,TempK;
float inicial=100,final=200,delta;
int n=10;
delta=(final-inicial)/n;
TempC=inicial;
while (TempC<=final){
TempK=TempC+273.15;
printf("%f %f,\n",TempC,TempK);
TempC=TempC+delta;  // TempC+=delta;
}
return 0;
}
