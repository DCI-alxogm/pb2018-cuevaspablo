/*Este programa realizara calculos de numeros enteros*/
#include<stdio.h>
int main()
{
int e,q,w,p,a,b,c,d;
printf("Dame cuatro numeros enteros \n");
scanf("%i",&a);
scanf("%i",&b);
scanf("%i",&c);
scanf("%i",&d);
(e=(a+b)*(c/d));
printf("\n El numero es: %i \n", e);
printf("Dame cuatro numeros enteros \n");
scanf("%i",&a);
scanf("%i",&b);
scanf("%i",&c);
scanf("%i",&d);
(p=((a+b)*c)/d);
printf("\n El numero es: %i \n", p);
printf("Dame cuatro numeros enteros \n");
scanf("%i",&a);
scanf("%i",&b);
scanf("%i",&c);
scanf("%i",&d);
(q=(a+b)*c/d);
printf("\n El numero es: %i \n", q);
printf("Dame cuatro numeros enteros \n");
scanf("%i",&a);
scanf("%i",&b);
scanf("%i",&c);
scanf("%i",&d);
(w=a+(b*c)/d);
printf("\n El numero es: %i \n", w);
return 0;
}
