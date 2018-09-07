/*Este es el segundo programa en el cual se usa la instrucción for*/
#include<stdio.h>
#include<math.h>
int main()
{
float e,p;
int n,j;
printf("Defina el número de pasos\n");
scanf("%i",&n);
printf("Defina otra variable\n");
scanf("%i",&p);
for (j=0;j<n;j++) 
{
e=exp(j);
printf("%i\t",j);
printf("%f\n",e);
}
return 0;
}
