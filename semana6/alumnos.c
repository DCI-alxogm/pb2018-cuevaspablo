/*En este programa se le pide al usuario información de un grupo de estudiantes predeterminado, para poder imprimirle al usuario la información resumida que él proporcione*/
#include<stdio.h>
int main() 
{
int i,j,n,p=12,sexo[n];
printf("De el número de alumnos para hacer la base de datos\n");
scanf("%i\n",&n);
printf("Escriba 1 para asginar masculino y 0 para femenino\n");
for (i=0;i<n;i++) {
scanf("%i\n,",&sexo[n]);
}
if (sexo[n]==1){
printf("El sexo es masculino\n");
}
else if(sexo[n]==0){
printf("El sexo es femenino\n");
}

return 0;
}
