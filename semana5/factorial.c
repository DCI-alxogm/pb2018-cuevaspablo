/*Este programa calcula el factorial de un número,usando el comando for*/
#include<stdio.h>
int main()
{
int j,k=3,m,p,l;
while (k==3){
p=1;
printf("Defina el número que quiere calcular\n");
scanf("%i",&m);
for (j=1;j<=m;j++){
p=p*j;
}
printf("El factorial del número %i = %i \n",m,p);
printf("¿Quiere realizar otra operación?, pulse 3 para sí y 0 para no\n");
scanf("%i",&l);
if (l!=3) {
printf("Se acabó el programa.\n");
k=0;
}
else if (l=3) {
k=3;
printf("Se reinicia el programa\n");
}
}
return 0;
}

