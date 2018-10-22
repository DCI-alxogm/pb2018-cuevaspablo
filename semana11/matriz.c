#include<stdio.h>
int main()
int n; 
int i,j,matriz[n][n];

for(i=0;i<n;i++) {
for(j=0;j<n;j++) {
printf("De valores a la matriz[%i][%i]\n",i+1,j+1);
scanf("%i",&matriz[i][j]);
}
}
for(i=0;i<n;i++) {
for(j=0;j<n;j++) {
printf("%i",matriz[i][j]);
}
printf("\n");
}
return 0;
}

