/*En este programa se evalúa una función y también se calcula la integral de la misma en un intervalo dado por el usuario*fscanf(datos,"%i",&o);*/
#include<stdio.h>
#include<math.h>
int main ()
{
FILE* archivo;
FILE* datos;
int n,o,k,j;
float a,b,p,h,x,funcionx,Integralx,sumatorio,t,intervalo;
datos= fopen("archivo.txt","r");
fscanf(datos,"%f",&p);
fscanf(datos,"%f",&a);
fscanf(datos,"%f",&b);
fscanf(datos,"%i",&n);
fscanf(datos,"%f",&t);
fscanf(datos,"%i",&o);
fclose(datos);
archivo = fopen("resultados.txt","w");
intervalo=((b-a)/n);
fprintf(archivo,"x\t funcionx\t Integralx\n");
for (j=1;j<=(n+1);j++){
h=((x-a)/k);
funcionx=t*(pow(x,p));
sumatorio=0.0;
for(k=1;k<=(o-1);k++){
sumatorio+=(2*t*(pow((a+(k*h)),p)));
}
Integralx = (h/2)*((t*(pow(a,p)))+sumatorio+(t*(pow(b,p))));
fprintf(archivo,"%f\t %f\t %f\n", x,funcionx,Integralx);
x+=intervalo;
}
fclose(archivo);

return 0;
}
