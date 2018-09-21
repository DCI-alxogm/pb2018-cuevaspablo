*En este programa se evalúa una función y también se calcula la integral de la misma en un intervalo dado por el usuario*/
#include<stdio.h>
#include<math.h>
int main ()
{
int q,x,y,p,i,k,z,n,j,o,t=2,w,v=1,ele;
float h,a,b,l,integral,s,sumatorio;
char m;
while (v==1){
printf("Escriba uno para elevar la potencia de un número (1)\n");
printf("Escriba 2 para calcular la integral aproximada de una variable(2)\n");
scanf("%i",&o);
switch (o) {
case 1:
printf("De un valor a la variable x\n");
scanf("%i",&x);
printf("Escriba una p entera, mayor o igual a uno, desde la cual comenzarán a evaluarse las potencias\n");
scanf("%i",&p);
printf("Diga cuántas veces quiere evaluar la variable\n");
scanf("%i",&q);
if (p>=1){
for(i=p;i<q+p;i++){
y=pow(x,i);
printf("El valor de x elevada a p es: %i \n",y);
}
}
else if (p<1) {
printf("Potencia inválida, se cerrará el programa\n");
}
break;
case 2:
printf("Escriba una función de x multiplicado por un número. La potencia la escribirá a continuación\n");
scanf("%i %c",&l,&m);
printf("Escriba una potencia para x\n");
scanf("%f",&p);
printf("De el número de subintervalos (o trapecios) para calcular el área de la integral\n");
scanf("%i",&n);
printf("De el límite inferior de la integral\n");
scanf("%i",&a);
printf("De el límite superior de la integral\n");
scanf("%i",&b);
h=((b-a)/n);
scanf("%f",&h);
for (j=1;j<=n-1;j++){
sumatorio=(2*(
scanf("%f",&sumatorio);
}

integral=(h/2)*((l*a)+(l*b)+sumatorio);
printf("La integral aproximada de la función es: %f\n",integral);
break;
}
printf("¿Quiere realizar otra operación?, pulse 1 para sí y 0 para no\n");
scanf("%i",&ele);
if (ele!=1) {
printf("Se acabó el programa.\n");
v=0;
}
else if (ele=1) {
v=1;
printf("Se reinicia el programa\n");
}
}
return 0;
}
