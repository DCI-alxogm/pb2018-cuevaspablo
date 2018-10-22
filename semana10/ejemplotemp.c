#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argv[]){
printf("El programa que estás ejecutando es: %s\n", argv[0]);

char *temperaturas;
FILE *grados;

float 	T0, Tf;
int n;

if(arg==5){	
T0=atof(argv[1]);
Tf=atof(argv[2]);
n=atoi(argv[3]);
temperaturas=argv[4];
printf("El nombre del archivo es: %s \t %s \n", argv[4],temperaturas);
                grados = fopen(temperaturas, "w");
                fprintf(grados, "T0:%f \t Tf:%f \t n:%i\n", T0, Tf, n);
		fprintf(grados, "i \t Celsius \t \t Farenheit\n");
		float delta=(Tf-T0)/n;
		float Farenheit, Celsius;
		for(int i=0;i<n;i++){
			Celsius=T0+(delta*i);
			Farenheit=((9/5)*Celsius)+32;
			fprintf(grados, "%i \t %f \t %f\n", i, Celsius, Farenheit);	
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
