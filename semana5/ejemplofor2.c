/*Este es el segundo programa en el cual se usa la instrucción for*/
#include<stdio.h>
#include<math.h>
int main()
{
float e,p;
int n,j,k=1,l;
while (k==1){
printf("Defina el número de pasos\n");
scanf("%i",&n);
for (j=0;j<n;j++) 
{
e=exp(j);
printf("%i\t",j);
printf("%f\n",e);
}
printf("¿Quiere realizar otra operación?, pulse 1 para sí y 0 para no\n");
scanf("%i",&l);
if (l!=1) {
printf("Se acabó el programa.\n");
k=0;
}
else if (l=1) {
k=1;
printf("Se reinicia el programa\n");
}
}
return 0;
}
