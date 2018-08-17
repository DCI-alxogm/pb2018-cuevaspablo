/*Este programa realizara cálculos de numeros reales*/
#include<stdio.h>
int main()
{
float a,b,c,d,E,f,g,h,i,J,k,l,m,n,O,p,q,r,s,T;
printf("Dame cuatro reales \n");
scanf("%f",&a);
scanf("%f",&d);
scanf("%f",&c);
scanf("%f",&b);
(E=(a+b)*c/d);
printf("\n El numero es: %f \n", E);

printf("Dame cuatro reales \n");
scanf("%f",&f);
scanf("%f",&g);
scanf("%f",&h);
scanf("%f",&i);
(J=((f+g)*h)/i);
printf("\n El numero es: %f \n", J);

printf("Dame cuatro reales \n");
scanf("%f",&k);
scanf("%f",&l);
scanf("%f",&m);
scanf("%f",&n);
(O=(k+l)*m/n);
printf("\n El numero es: %f \n", O);

printf("Dame cuatro reales \n");
scanf("%f",&p);
scanf("%f",&q);
scanf("%f",&r);
scanf("%f",&s);
(T=p+(q*r)/s);
printf("\n El numero es: %f \n", T);


return 0;
}
