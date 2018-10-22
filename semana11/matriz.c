#include<stdio.h>
#include<math.h>
int main(){
int i,j,n,p;
int matriz[i][j];
FILE *temperaturas;
FILE *resultados;
printf("Digite el número de filas\n");
scanf("%i",&n);
printf("Digite el número de columnas\n");
scanf("%i",&p);
temperaturas = fopen("temperaturas.txt","r");
for(i=0;i<n;i++) {
for(j=0;j<p;j++) {
fscanf(temperaturas,"%i",&matriz[i][j]);
}
}
fclose(temperaturas);
resultados=fopen("resultados.txt","w");
for(i=0;i<n;i++) {
for(j=0;j<p;j++) {
fprintf(resultados,"%i \t \n",matriz[i][j]);
}
printf("\n");
}
fclose(resultados);
return 0;
}

