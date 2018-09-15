/*Este programa convierte el programa de alumnos a un archivo*/
#include<stdio.h>
int main() 
{
FILE*archivo;
int k,n=10,p,sexo[10]={1,2,3,4,5,6,7,8,9,10},semestre[10]={1,2,3,4,5,6,7,8,9,10};
float a,b,c,d,e,f,g,h,i,j,z;
char var[255];
archivo=fopen("archivo.txt","r");
fgets(var,255,(FILE*)archivo);
printf("%s",var);
fscanf(archivo,"%s",var);
printf("%s\n",var);
fputs("Este es el archivo de el programa alumnos",archivo);
fprintf(archivo,"A continuación, proporcionará información de diez alumnos\n");
fprintf(archivo,"Escriba el promedio de cada alumno, luego escriba el semestre del primer alumno\n");
fscanf(archivo,"%f\n,",&a);
fscanf(archivo,"%f\n,",&b);
fscanf(archivo,"%f\n,",&c);
fscanf(archivo,"%f\n,",&d);
fscanf(archivo,"%f\n,",&e);
fscanf(archivo,"%f\n,",&f);
fscanf(archivo,"%f\n,",&g);
fscanf(archivo,"%f\n,",&h);
fscanf(archivo,"%f\n,",&i);
fscanf(archivo,"%f\n,",&j);
fprintf(archivo,"Escriba el semestre del alumno 2 al alumno diez, y en el décimo primer caracter, escriba 0\n");    
for (k=0;k<n;k++) {
fscanf(archivo,"%i\n,",&semestre[k]);
}
fprintf(archivo,"Escriba escriba 1 para asginar masculino, 2 para femenino, y en el décimo primer caracter, escriba 0\n");   
for (p=0;p<n+1;p++) {
fscanf(archivo,"%i\n,",&sexo[p]);

}

fprintf(archivo,"El promedio del alumno 1 es: %f \n",a);
fprintf(archivo,"El promedio del alumno 2 es: %f \n",b);
fprintf(archivo,"El promedio del alumno 3 es: %f \n",c);
fprintf(archivo,"El promedio del alumno 4 es: %f \n",d);
fprintf(archivo,"El promedio del alumno 5 es: %f \n",e);
fprintf(archivo,"El promedio del alumno 6 es: %f \n",f);
fprintf(archivo,"El promedio del alumno 7 es: %f \n",g);
fprintf(archivo,"El promedio del alumno 8 es: %f \n",h);
fprintf(archivo,"El promedio del alumno 9 es: %f \n",i);
fprintf(archivo,"El promedio del alumno 10 es: %f \n",j);
z=(a+b+c+d+e+f+g+h+i+j)/10;
fprintf(archivo,"EL promedio global es: %f\n",z);
if (semestre[0]==1){
fprintf(archivo,"El alumno 1 va en primero\n",semestre[0]);
}
else if (semestre[0]==2){
fprintf(archivo,"El alumno 1 va en segundo\n",semestre[0]);
}
else if (semestre[0]==3){
fprintf(archivo,"El alumno 1 va en tercero\n",semestre[0]);
}
else if (semestre[0]==4){
fprintf(archivo,"El alumno 1 va en cuarto\n",semestre[0]);
}
else if (semestre[0]==5){
fprintf(archivo,"El alumno 1 va en quinto\n",semestre[0]);
}
 else if (semestre[0]==6){
fprintf(archivo,"El alumno 1 va en sexto\n",semestre[0]);
}
else if (semestre[0]==7){
fprintf(archivo,"El alumno 1 va en séptimo\n",semestre[0]);
}
else if (semestre[0]==8){
fprintf(archivo,"El alumno 1 va  en octavo\n",semestre[0]);
}
else if (semestre[0]==9){
fprintf(archivo,"El alumno 1 va en noveno\n",semestre[0]);
}


if (semestre[1]==1){
fprintf(archivo,"El alumno 2 va  en primero\n",semestre[1]);
}
else if (semestre[1]==2){
fprintf(archivo,"El alumno 2 va  en segundo\n",semestre[1]);
}
else if (semestre[1]==3){
fprintf(archivo,"El alumno 2 va en tercero\n",semestre[1]);
}
else if (semestre[1]==4){
fprintf(archivo,"El alumno 2 va en cuarto\n",semestre[1]);
}
else if (semestre[1]==5){
fprintf(archivo,"El alumno 2 va  en quinto\n",semestre[1]);
}
 else if (semestre[1]==6){
fprintf(archivo,"El alumno 2 va  en sexto\n",semestre[1]);
}
else if (semestre[1]==7){
fprintf(archivo,"El alumno 2 va en séptimo\n",semestre[1]);
}
else if (semestre[1]==8){
fprintf(archivo,"El alumno 2 va en octavo\n",semestre[1]);
}
else if (semestre[1]==9){
fprintf(archivo,"El alumno 2 va en noveno\n",semestre[1]);
}
if (semestre[2]==1){
fprintf(archivo,"El alumno 3 va en primero\n",semestre[2]);
}
else if (semestre[2]==2){
fprintf(archivo,"El alumno 3 va en segundo\n",semestre[2]);
}
else if (semestre[2]==3){
fprintf(archivo,"El alumno 3 va en tercero\n",semestre[2]);
}
else if (semestre[2]==4){
fprintf(archivo,"El alumno 3 va en cuarto\n",semestre[2]);
}
else if (semestre[2]==5){
fprintf(archivo,"El alumno 3 va en quinto\n",semestre[2]);
}
 else if (semestre[2]==6){
fprintf(archivo,"El alumno 3 va en sexto\n",semestre[2]);
}
else if (semestre[2]==7){
fprintf(archivo,"El alumno 3 va en séptimo\n",semestre[2]);
}
else if (semestre[2]==8){
fprintf(archivo,"El alumno 3 va en octavo\n",semestre[2]);
}
else if (semestre[2]==9){
fprintf(archivo,"El alumno 3 va en noveno\n",semestre[2]);
}
if (semestre[3]==1){
printf(archivo,"El alumno 4 va en primero\n",semestre[3]);
}
else if (semestre[3]==2){
fprintf(archivo,"El alumno 4 va en segundo\n",semestre[3]);
}
else if (semestre[3]==3){
fprintf(archivo,"El alumno 4 va en tercero\n",semestre[3]);
}
else if (semestre[3]==4){
fprintf(archivo,"El alumno 4 va en cuarto\n",semestre[3]);
}
else if (semestre[3]==5){
fprintf(archivo,"El alumno 4 va en quinto\n",semestre[3]);
}
 else if (semestre[3]==6){
fprintf(archivo,"El alumno 4 va en sexto\n",semestre[3]);
}
else if (semestre[3]==7){
fprintf(archivo,"El alumno 4 va en séptimo\n",semestre[3]);
}
else if (semestre[3]==8){
fprintf(archivo,"El alumno 4 va en octavo\n",semestre[3]);
}
else if (semestre[3]==9){
fprintf(archivo,"El alumno 4 va en noveno\n",semestre[3]);
}


if (semestre[4]==1){
fprintf(archivo,"El alumno 5 va en primero\n",semestre[4]);
}
else if (semestre[4]==2){
fprintf(archivo,"El alumno 5 va en segundo\n",semestre[4]);
}
else if (semestre[4]==3){
fprintf(archivo,"El alumno 5 va en tercero\n",semestre[4]);
}
else if (semestre[4]==4){
fprintf(archivo,"El alumno 5 va en cuarto\n",semestre[4]);
}
else if (semestre[4]==5){
fprintf(archivo,"El alumno 5 va en quinto\n",semestre[4]);
}
 else if (semestre[4]==6){
fprintf(archivo,"El alumno 5 va en sexto\n",semestre[4]);
}
else if (semestre[4]==7){
fprintf(archivo,"El alumno 5 va en séptimo\n",semestre[4]);
}
else if (semestre[4]==8){
fprintf(archivo,"El alumno 5 va en octavo\n",semestre[4]);
}
else if (semestre[4]==9){
fprintf(archivo,"El alumno 5 va en noveno\n",semestre[4]);
}

if (semestre[5]==1){
fprintf(archivo,"El alumno 6 va en primero\n",semestre[5]);
}
else if (semestre[5]==2){
fprintf(archivo,"El alumno 6 va en segundo\n",semestre[5]);
}
else if (semestre[5]==3){
fprintf(archivo,"El alumno 6 va en tercero\n",semestre[5]);
}
else if (semestre[5]==4){
fprintf(archivo,"El alumno 6 va en cuarto\n",semestre[5]);
}
else if (semestre[5]==5){
fprintf(archivo,"El alumno 6 va en quinto\n",semestre[5]);
}
 else if (semestre[5]==6){
fprintf(archivo,"El alumno 6 va en sexto\n",semestre[5]);
}
else if (semestre[5]==7){
fprintf(archivo,"El alumno 6 va en séptimo\n",semestre[5]);
}
else if (semestre[5]==8){
fprintf(archivo,"El alumno 6 va en octavo\n",semestre[5]);
}
else if (semestre[5]==9){
fprintf(archivo,"El alumno 6 va en noveno\n",semestre[6]);
}
if (semestre[6]==1){
fprintf(archivo,"El alumno 7 va en primero\n",semestre[6]);
}
else if (semestre[6]==2){
fprintf(archivo,"El alumno 7 va en segundo\n",semestre[6]);
}
else if (semestre[6]==3){
fprintf(archivo,"El alumno 7 va en tercero\n",semestre[6]);
}
else if (semestre[6]==4){
fprintf(archivo,"El alumno 7 va en cuarto\n",semestre[6]);
}
else if (semestre[6]==5){
fprintf(archivo,"El alumno 7 va en quinto\n",semestre[6]);
}
 else if (semestre[6]==6){
fprintf(archivo,"El alumno 7 va en sexto\n",semestre[6]);
}
else if (semestre[6]==7){
fprintf(archivo,"El alumno 7 va en séptimo\n",semestre[6]);
}
else if (semestre[6]==8){
fprintf(archivo,"El alumno 7 va en octavo\n",semestre[6]);
}
else if (semestre[6]==9){
fprintf(archivo,"El alumno 7 va en noveno\n",semestre[6]);
}
if (semestre[7]==1){
fprintf(archivo,"El alumno 8 va en primero\n",semestre[7]);
}
else if (semestre[7]==2){
fprintf(archivo,"El alumno 8 va en segundo\n",semestre[7]);
}
else if (semestre[7]==3){
fprintf(archivo,"El alumno 8 va en tercero\n",semestre[7]);
}
else if (semestre[7]==4){
fprintf(archivo,"El alumno 8 va en cuarto\n",semestre[7]);
}
else if (semestre[7]==5){
fprintf(archivo,"El alumno 8 va en quinto\n",semestre[7]);
}
 else if (semestre[7]==6){
fprintf(archivo,"El alumno 8 va en sexto\n",semestre[7]);
}
else if (semestre[7]==7){
fprintf(archivo,"El alumno 8 va en séptimo\n",semestre[7]);
}
else if (semestre[7]==8){
fprintf(archivo,"El alumno 8 va en octavo\n",semestre[7]);
}
else if (semestre[7]==9){
fprintf(archivo,"El alumno 8 va en noveno\n",semestre[7]);
}
if (semestre[8]==1){
fprintf(archivo,"El alumno 9 va en primero\n",semestre[8]);
}
else if (semestre[8]==2){
fprintf(archivo,"El alumno 9 va en segundo\n",semestre[8]);
}
else if (semestre[8]==3){
fprintf(archivo,"El alumno 9 va en tercero\n",semestre[8]);
}
else if (semestre[8]==4){
fprintf(archivo,"El alumno 9 va en cuarto\n",semestre[8]);
}
else if (semestre[8]==5){
fprintf(archivo,"El alumno 9 va en quinto\n",semestre[8]);
}
 else if (semestre[8]==6){
fprintf(archivo,"El alumno 9 va en sexto\n",semestre[8]);
}
else if (semestre[8]==7){
fprintf(archivo,"El alumno 9 va en séptimo\n",semestre[8]);
}
else if (semestre[8]==8){
fprintf(archivo,"El alumno 9 va en octavo\n",semestre[8]);
}
else if (semestre[8]==9){
fprintf(archivo,"El alumno 9 va en noveno\n",semestre[8]);
}
if (semestre[9]==1){
fprintf(archivo,"El alumno 10 va en primero\n",semestre[9]);
}
else if (semestre[9]==2){
fprintf(archivo,"El alumno 10 va en segundo\n",semestre[9]);
}
else if (semestre[9]==3){
fprintf(archivo,"El alumno 10 va en tercero\n",semestre[9]);
}
else if (semestre[9]==4){
fprintf(archivo,"El alumno 10 va en cuarto\n",semestre[9]);
}
else if (semestre[9]==5){
fprintf(archivo,"El alumno 10 va en quinto\n",semestre[9]);
}
 else if (semestre[9]==6){
fprintf(archivo,"El alumno 10 va en sexto\n",semestre[9]);
}
else if (semestre[9]==7){
fprintf(archivo,"El alumno 10 va en séptimo\n",semestre[9]);
}
else if (semestre[9]==8){
fprintf(archivo,"El alumno 10 va en octavo\n",semestre[9]);
}
else if (semestre[9]==9){
fprintf(archivo,"El alumno 10 va en noveno\n",semestre[9]);
}
if (sexo[0==1]){
fprintf(archivo,"El sexo del alumno 1 es masculino\n",sexo[0]);
}
else if(sexo[0]==2){
fprintf(archivo,"El sexo del alumno 1 femenino\n",sexo[0]);
}
else if (sexo[1]==1){
fprintf(archivo,"El sexo del alumno 1 masculino\n",sexo[1]);
}
else if(sexo[1]==2){
fprintf(archivo,"El sexo del alumno 1 femenino\n",sexo[1]);
}
if (sexo[2]==1){
fprintf(archivo,"El sexo del alumno 2 masculino\n",sexo[2]);
}
else if(sexo[2]==2){
fprintf(archivo,"El sexo del alumno 2 es femenino\n",sexo[2]);
}
if (sexo[3]==1){
fprintf(archivo,"El sexo del alumno 3 es masculino\n",sexo[3]);
}
else if(sexo[3]==2){
fprintf(archivo,"El sexo del alumno 3 es femenino\n",sexo[3]);
}
if (sexo[4]==1){
fprintf(archivo,"El sexo del alumno 4 es masculino\n",sexo[4]);
}
else if(sexo[4]==2){
fprintf(archivo,"El sexo del alumno 4 es femenino\n",sexo[4]);
}
if (sexo[5]==1){
fprintf(archivo,"El sexo del alumno 5 es masculino\n",sexo[5]);
}
else if(sexo[5]==2){
fprintf(archivo,"El sexo del alumno 5 es femenino\n",sexo[5]);
}
if (sexo[6]==1){
fprintf(archivo,"El sexo del alumno 6 es masculino\n",sexo[6]);
}
else if(sexo[6]==2){
fprintf(archivo,"El sexo del alumno 6 femenino\n",sexo[6]);
}
if (sexo[7]==1){
fprintf(archivo,"El sexo del alumno 7 es masculino\n",sexo[7]);
}
else if(sexo[7]==2){
fprintf(archivo,"El sexo del alumno 7 es femenino\n",sexo[7]);
}
if (sexo[8]==1){
fprintf(archivo,"El sexo del alumno 8 es masculino\n",sexo[8]);
}
else if(sexo[8]==2){
fprintf(archivo,"El sexo del alumno 8 es femenino\n",sexo[8]);
}
if (sexo[9]==1){
fprintf(archivo,"El sexo del alumno 9 es masculino\n",sexo[9]);
}
else if(sexo[9]==2){
fprintf(archivo,"El sexo del alumno 9 es femenino\n",sexo[9]);
}
if (sexo[10]==1){
fprintf(archivo,"El sexo  del alumno 10 es masculino\n",sexo[10]);
}
else if(sexo[10]==2){
fprintf(archivo,"El sexo del alumno 10 es femenino\n",sexo[10]);
}
fclose(archivo);
return 0;
}

