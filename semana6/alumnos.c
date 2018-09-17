/*En este programa se le pide al usuario información de un grupo de estudiantes predeterminado, para poder imprimirle al usuario la información resumida que él proporcione*/
#include<stdio.h>
int main() 
{
float a,b,c,d,e,f,g,h,i,j,z;
printf("A continuación, proporcionará información de diez alumnos\n");
printf("Escriba el promedio de cada alumno\n"); 
scanf("%f\n,",&a);
scanf("%f\n,",&b);
scanf("%f\n,",&c);
scanf("%f\n,",&d);
scanf("%f\n,",&e);
scanf("%f\n,",&f);
scanf("%f\n,",&g);
scanf("%f\n,",&h);
scanf("%f\n,",&i);
scanf("%f\n,",&j);
printf("El promedio del alumno 1 es: %f \n",a);
printf("El promedio del alumno 2 es: %f \n",b);
printf("El promedio del alumno 3 es: %f \n",c);
printf("El promedio del alumno 4 es: %f \n",d);
printf("El promedio del alumno 5 es: %f \n",e);
printf("El promedio del alumno 6 es: %f \n",f);
printf("El promedio del alumno 7 es: %f \n",g);
printf("El promedio del alumno 8 es: %f \n",h);
printf("El promedio del alumno 9 es: %f \n",i);
printf("El promedio del alumno 10 es: %f \n",j);
z=(a+b+c+d+e+f+g+h+i+j)/10;
printf("EL promedio global es: %f\n",z);
return 0;
}
