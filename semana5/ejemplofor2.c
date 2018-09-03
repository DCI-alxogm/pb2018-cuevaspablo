/*Este es el segundo programa en el cual se usa la instrucción for*/
#include<stdio.h>
#include<math.h>
int main()
{
float e;
int n=10,j;
for (j=0;j<n;j++) 
{
e=exp(j);
printf("%i\t",j);
printf("%f\n",e);
}
return 0;
}
