/*Este es un programa cuya función es convertir ciertos valores de temperaturas*/
#include<stdio.h>
int main()
{
float F,C,K;
printf("Proporcione una temperatura en grados Celsius: \n");
scanf("%f",&C);
(F=(((9*C)/5)+32));
(K=(C+273.15));
printf("\n La temperatura en Kelvin es : %f \n",K);
printf("\n La temperatura en Fahrenheit es : %f \n",F);
(C=((5*(F-32))/9));
printf("\n La temperatura en Celsius es : %f \n",C);
return 0;
}
