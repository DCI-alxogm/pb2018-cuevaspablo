//Esta es la segunda manera de redactar una función//
#include<stdio.h>
#include<math.h>
float sinhyp(float p);
int main() {
float x,sinh;
printf("Introduce un número \n");
scanf("%f",&x);
sinh=(((exp(x))-(exp(-x)))/2);
printf("El seno hiperbólico de %f es: %f\n",x,sinh);
return 0;
}
float cuadrado(float p){
return p*p;
}

void cosh();
int main(){
cosh();
return 0;
}
void cosh (){
float x,cosh;
printf("Introduce un número \n");
scanf("%f",&x);
sinh=(((exp(x))+(exp(-x)))/2);
printf("El coseno hiperbólico de %f es: %f\n",x,cosh);
}
