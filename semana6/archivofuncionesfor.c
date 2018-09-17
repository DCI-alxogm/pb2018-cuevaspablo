/*Este es el primer ejercicio en el cual se usará la función for, evaluando funciones trigonométricas y una exponencial, en intervalos que el usuario defina*/
#include<stdio.h>
#include<math.h>
int main()
{
FILE*archivo;
float a,d,e,f,x,y,z,pi=3.14159265359,r,s,t;
char var[255];
int n,k=1,l,p,j,w;
archivo=fopen("funciones.txt","w");
fputs("Este es el archivo del programa fucncionesfor",archivo);
while (k==1){
fprintf(archivo,"Teclea una opción \n");
fprintf(archivo,"(1) para evaluar la variable en la función exp\n");
fprintf(archivo,"(2) para evaluar la variable en la función sin\n");
fprintf(archivo,"(3) para evaluar la variable en la función cos\n");
fprintf(archivo,"(4) para evaluar la variable en la función log\n");
fprintf(archivo,"(5) para calcular la raíz cuadrada de la variable\n");
fscanf(archivo,"%i",&p);
if (p<1 || p>5) {
fprintf(archivo,"Opción inválida, se acabó el programa.\n");
k=1-1;
}
else {
fprintf(archivo,"\n");
}
fprintf(archivo,"Defina el número de pasos\n");
fscanf(archivo,"%i",&n);

switch(p)
{
case 1:
for (x=0;x<n;x++) {
fprintf("a=exp(x)\n");
fprintf(archivo,"%i\t",x);
fprintf(archivo,"%f\n",a);
}
break;
case 2: 
for (j=0;j<n;j++) 
{
fprintf("e=sin(j*(pi/180))\n");
fprintf(archivo,"%i\t",j);
fprintf(archivo,"%f\n",e);
}
break;
case 3:
for (j=0;j<n;j++) 
{
fprintf("e=cos(j*(pi/180))\n");
fprintf(archivo,"%i\t",j);
fprintf(archivo,"%f\n",e);
}
break;
case 4: 
for (f=0;f<n;f++) {
fprintf("d=log(f)\n");
fprintf(archivo,"%i\t",f);
fprintf(archivo,"%f\n",d);
}
break;
case 5: 
for (t=0;t<n;t++) {
fprintf("f=sqrt(t)\n");
fprintf(archivo,"%i\t",t);
fprintf(archivo,"%f\n",f);
}
break;
}
fprintf(archivo,"¿Quiere realizar otra operación?, pulse 1 para sí y 0 para no\n");
fscanf(archivo,"%i",&l);
if (l!=1) {
fprintf(archivo,"Se acabó el programa.\n");
k=0;
}
else if (l=1) {
k=1;
fprintf(archivo,"Se reinicia el programa\n");
}
}
fclose(archivo);
return 0;
}
