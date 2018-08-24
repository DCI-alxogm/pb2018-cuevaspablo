/*Este programa identifica letras y determina si son vocales mayúsculas o minúsculas*/
#include<stdio.h>
int main()
{
char c;
int es_vocalminuscula, es_vocalmayuscula;
printf("Introduce una letra: \n");
scanf("%c",&c);
es_vocalminuscula = (c =='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
es_vocalmayuscula = (c =='A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if (es_vocalminuscula || es_vocalmayuscula) {
printf("%c es una vocal \n",c);
} else{
printf("%c es una consonante\n",c);
}
return 0;
}
