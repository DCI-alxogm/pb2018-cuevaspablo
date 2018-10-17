#include<stdio.h>
void cuadrado();
int main() {
cuadrado();
return 0;
}

#include<stdio.h>
void cuadrado() {
float a,b;
printf("Introduce un número\n");
scanf("%f",&a);
b=a*a;
printf("El cuadrado de %f es:%f\n",a,b);
}
