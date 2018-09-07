/*Este programa calcula los números primos existentes en un intervalo de números*/
#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,e,k=1,l;
while (k==1){
printf("Inserte el intervalo de números\n");
scanf("%i",&a);
scanf("%i",&b);
if((a-b)<=100){
printf("Los números primos en el intervalo son\n");
for (c=a;c<=b;c++) {

for (d=2;d<c;d++) {
e=0;
for(d=1;d<=c;d++) {
if(c%d==0) {
e++;
}
}
if(e==2) {
printf("%i\n",c);
}
else {
printf("\n");
}
}
}
}

else {
printf("El intervalo no es válido\n");
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

