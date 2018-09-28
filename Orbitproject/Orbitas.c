/*El objetivo de este programa es calcular las órbitas de los nueve planetas del sistema solar*/
#include<stdio.h>
#include<math.h>
int main () 
{
FILE* datos;
FILE* mercurio;
FILE* venus;
FILE* tierra;
FILE* marte;
FILE* jupiter;
FILE* saturno;
FILE* urano;
FILE* neptuno;
FILE* pluton;
//En este apartado se abre un archivo que lee los datos de todos los planetas, y también se abren nueve archivos adicionales, los cuales sirven para imprimir los datos de cada planeta
int n=365;
int dias[n],i,j,k,Msol;
int years,UA,t0,ti,h;
double pi=3.141592653589793238,G;
double x0tierra,y0tierra,z0tierra,vx0tierra,vy0tierra,vz0tierra;
double xitierra,yitierra,zitierra,vxitierra,vyitierra,vzitierra;
double x0marte,y0marte,z0marte,vx0marte,vy0marte,vz0marte,x0venus,y0venus,z0venus,vx0venus,vy0venus,vz0venus;
double ximarte,yimarte,zimarte,vximarte,vyimarte,vzimarte,xivenus,yivenus,zivenus,vxivenus,vyivenus,vzivenus;
double x0mercurio,y0mercurio,z0mercurio,vx0mercurio,vy0mercurio,vz0mercurio,x0jupiter,y0jupiter,z0jupiter,vx0jupiter,vy0jupiter,vz0jupiter;
double ximercurio,yimercurio,zimercurio,vximercurio,vyimercurio,vzimercurio,xijupiter,yijupiter,zijupiter,vxijupiter,vyijupiter,vzijupiter;
double x0saturno,y0saturno,z0saturno,vx0saturno,vy0saturno,vz0saturno,x0urano,y0urano,z0urano,vx0urano,vy0urano,vz0urano;
double xisaturno,yisaturno,zisaturno,vxisaturno,vyisaturno,vzisaturno,xiurano,yiurano,ziurano,vxiurano,vyiurano,vziurano;
double x0neptuno,y0neptuno,z0neptuno,vx0neptuno,vy0neptuno,vz0neptuno,x0pluton,y0pluton,z0pluton,vx0pluton,vy0pluton,vz0pluton;
double xineptuno,yineptuno,zineptuno,vxineptuno,vyineptuno,vzineptuno,xipluton,yipluton,zipluton,vxipluton,vyipluton,vzipluton;
datos = fopen("datosplanetas.txt","r");
fscanf(datos,"%i",&Msol);
// Escaneo de los datos de mercurio
fscanf(datos,"%lf %lf %lf %lf %lf %lf",&x0mercurio,&y0mercurio,&z0mercurio,&vx0mercurio,&vy0mercurio,&vz0mercurio);
//Escaneo de los datos de venus
fscanf(datos,"%lf %lf %lf %lf %lf %lf",&x0venus,&y0venus,&z0venus,&vx0venus,&vy0venus,&vz0venus);
//Escaneo de los datos de la tierra
fscanf(datos,"%lf %lf %lf %lf %lf %lf",&x0tierra,&y0tierra,&z0tierra,&vx0tierra,&vy0tierra,&vz0tierra);
//Escaneo de los datos de marte
fscanf(datos,"%lf %lf %lf %lf %lf %lf",&x0marte,&y0marte,&z0marte,&vx0marte,&vy0marte,&vz0marte);
//Escaneo de los datos de jupiter
fscanf(datos,"%lf %lf %lf %lf %lf %lf",&x0jupiter,&y0jupiter,&z0jupiter,&vx0jupiter,&vy0jupiter,&vz0jupiter);
//Escaneo de los datos de saturno
fscanf(datos,"%lf %lf %lf %lf %lf %lf",&x0saturno,&y0saturno,&z0saturno,&vx0saturno,&vy0saturno,&vz0saturno);
//Escaneo de los datos de urano
fscanf(datos,"%lf %lf %lf %lf %lf %lf",&x0urano,&y0urano,&z0urano,&vx0urano,&vy0urano,&vz0urano);
//Escaneo de los datos de neptuno
fscanf(datos,"%lf %lf %lf %lf %lf %lf",&x0neptuno,&y0neptuno,&z0neptuno,&vx0neptuno,&vy0neptuno,&vz0neptuno);
//Escaneo de los datos de pluton
fscanf(datos,"%lf %lf %lf %lf %lf %lf",&x0pluton,&y0pluton,&z0pluton,&vx0pluton,&vy0pluton,&vz0pluton);
fclose(datos);

//MERCURIO
mercurio = fopen("Mercurioresultados.txt","w");
fprintf(mercurio,"x0mercurio\t y0mercurio\t z0mercurio\t vx0mercurio\t vy0mercurio\t vz0mercurio\t");
for(j=0;j<n;j++){
scanf("%i",&dias[j]);
for (k=0;k<n;k++){
h=ti-t0,G=(4*(pow(pi,2))*UA*(pow(years,-2))*(Msol));
for (i=0;i<n;i++){
ximercurio = x0mercurio +(vx0mercurio*h);
yimercurio = y0mercurio +(vy0mercurio*h);
zimercurio = z0mercurio +(vz0mercurio*h);

vximercurio = vx0mercurio -(h*((G*Msol*x0mercurio))/UA);
vyimercurio = vy0mercurio -(h*((G*Msol*y0mercurio))/UA);
vzimercurio = vz0mercurio -(h*((G*Msol*z0mercurio))/UA);
}
}
fprintf(mercurio,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",ximercurio,yimercurio,zimercurio,vximercurio,vyimercurio,vzimercurio);
}
fclose(mercurio);




 


return 0;
}
