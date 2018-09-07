/*Este es el primer ejercicio en el cual se usará la función for, evaluando funciones trigonométricas y una exponencial, en intervalos que el usuario defina*/
#include<stdio.h>
#include<math.h>
int main()
{
float a,d,e,f,x,y,z,pi=3.14159265359,r,s,t;
int n,k=1,l,p,j,w;
while (k==1){
printf("Teclea una opción \n");
printf("(1) para evaluar la variable en la función exp\n");
printf("(2) para evaluar la variable en la función sin\n");
printf("(3) para evaluar la variable en la función cos\n");
printf("(4) para evaluar la variable en la función log\n");
printf("(5) para calcular la raíz cuadrada de la variable\n");
scanf("%i",&p);
if (p<1 || p>5) {
printf("Opción inválida, se acabó el programa.\n");
k=1-1;
}
else {
printf("\n");
}
printf("Defina el número de pasos\n");
scanf("%i",&n);

switch(p)
{
case 1:
for (x=0;x<n;x++) {
a=exp(x);
printf("%i\t",x);
printf("%f\n",a);
}
break;
case 2: 
for (j=0;j<n;j++) 
{
e=sin(j*(pi/180));
printf("%i\t",j);
printf("%f\n",e);
}
break;
case 3:
for (j=0;j<n;j++) 
{
e=cos(j*(pi/180));
printf("%i\t",j);
printf("%f\n",e);
}
break;
case 4: 
for (f=0;f<n;f++) {
d=log(f);
printf("%i\t",f);
printf("%f\n",d);
}
break;
case 5: 
for (t=0;t<n;t++) {
f=sqrt(t);
printf("%i\t",t);
printf("%f\n",f);
}
break;
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
