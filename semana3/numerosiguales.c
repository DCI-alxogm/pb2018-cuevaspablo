/*Este programa analiza dos números propuestos por el usuario y determina si son iguales, mayores o menores*/
#include<stdio.h>
int main()
{
int numero1,numero2;
printf("Introduzca dos números enteros\n");
scanf("%i %i",&numero1,&numero2);
if (numero1==numero2)
{printf("Resultado: %d = %d,los números son iguales\n",numero1,numero2);
}
else if (numero1>numero2)
{
printf("Resultado: %d>%d el número1 es mayor que el número2\n",numero1,numero2);
}
else
{printf("Resultado: %d<%d el número1 es menor que el número2\n",numero1,numero2);
}
return 0;
}

