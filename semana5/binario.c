#include <stdio.h>
#include <math.h>
int main()
{

int n,i,binario[n],p,sumatorio,a,sumatorio2;
printf("Escriba la cantidad de dígitos del numero binario que quiere convertir\n");
scanf("%i",&n);
printf("Escriba un número binario, dígito por dígito\n");
for(i=0;i<n;i++){
scanf("%i",&binario[i]);

    for(p=n;p<0;p--){
    if(binario[i]==1){
    binario[i]=1*(pow(2,p)); 
   
    }
    else if(binario[i]==0){
        binario[i]=0*(pow(2,p));
      
    }
sumatorio2+=binario[i];
    }
sumatorio+=binario[i];
}
printf("El número en decimal es:%i\n",sumatorio2);
 
return 0;
}

