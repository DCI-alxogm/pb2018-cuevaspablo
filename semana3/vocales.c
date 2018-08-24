/*Este programa identifica letras y determina si son vocales mayúsculas o minúsculas*/
#include<stdio.h>
int main()
{
char c;
int es_vocalminuscula, es_vocalmayuscula;
printf("Introduce una letra: \n");
scanf("%c",&c);
es_vocalminuscula = (c=='a'
