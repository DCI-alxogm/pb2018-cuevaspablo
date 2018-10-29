#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argv[]){
printf("El programa que estás ejecutando es: %s\n", argv[0]);

char *temperaturas;
FILE *grados;

float 	T0, Tf;
int n;

if(arg==5){	
T0=atof(argt[1]);
Tf=atof(argt[2]);
n=atoi(argt[3]);
temperaturas=argt[4];
printf("El nombre del archivo es: %s \t %s \n", argt[4],temperaturas);
                grados = fopen(temperaturas, "w");
                fprintf(grados, "T0:%f \t Tf:%f \t n:%i\n", T0, Tf, n);
		fprintf(grados, "i \t C \t \t F\n");
		float delta=(Tf-T0)/n;
		float F, C;
		for(int i=0;i<n;i++){
			C=T0+(delta*i);
			F=((9/5)*C)+32;
			fprintf(grados, "%i \t %f \t %f\n", i, C, F);	
		}
                fclose(grados);
        }
        else if(arg>5){
                printf("Dio más argumentos de los necesarios\n");
        }
        else{
                printf("Se requiere de al menos 1 argumento \n");
        }

        return 0;
}
