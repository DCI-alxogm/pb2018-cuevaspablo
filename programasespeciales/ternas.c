#include <stdio.h>
#include <math.h>
int main()
{ 
    int n=500,i,j,p=1;
   float CA=1,CO=1,H,H2;
   printf("CA\t CO\t H\t Número de terna\t\n");
   for(j=0;j<n;j++) {
       while(CA<n) {
             for(i=0;i<n;i++) {
             H2=(pow(CA,2))+(pow(CO,2));
             H=sqrt((pow(CA,2))+(pow(CO,2)));
              
            if(((sqrt(H2))/H)==1 && H<n) {
                   
                printf("%f \t  %f\t  %f\t %i\t\n",CA,CO,H,p);
        
             p++;   
            }
            else if(((sqrt(H2))/H)!=1) {
                
            }
            CA++;
            
             }
             
       }
       CA=1;
       
             CO++;
           
   }

    return 0;
}

