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
int i,Msol=1;
int years,h,contador,contador1,contador2,contador3,contador4,contador5;
double pi=3.141592653589793238,G,z,a,b,c,d;
double rmercurio,rvenus,rtierra,rmarte,rjupiter,rsaturno,rurano,rneptuno,rpluton;
double tmercurio,tvenus,ttierra,tmarte,tjupiter,tsaturno,turano,tneptuno,tpluton;
double x0tierra,y0tierra,z0tierra,vx0tierra,vy0tierra,vz0tierra;
double xitierra,yitierra,zitierra,vxitierra,vyitierra,vzitierra;
double cmercurio,cvenus,ctierra,cmarte,cjupiter,csaturno,curano,cneptuno,cpluton;
double x0marte,y0marte,z0marte,vx0marte,vy0marte,vz0marte,x0venus,y0venus,z0venus,vx0venus,vy0venus,vz0venus;
double ximarte,yimarte,zimarte,vximarte,vyimarte,vzimarte,xivenus,yivenus,zivenus,vxivenus,vyivenus,vzivenus;
double x0mercurio,y0mercurio,z0mercurio,vx0mercurio,vy0mercurio,vz0mercurio,x0jupiter,y0jupiter,z0jupiter,vx0jupiter,vy0jupiter,vz0jupiter;
double ximercurio,yimercurio,zimercurio,vximercurio,vyimercurio,vzimercurio,xijupiter,yijupiter,zijupiter,vxijupiter,vyijupiter,vzijupiter;
double x0saturno,y0saturno,z0saturno,vx0saturno,vy0saturno,vz0saturno,x0urano,y0urano,z0urano,vx0urano,vy0urano,vz0urano;
double xisaturno,yisaturno,zisaturno,vxisaturno,vyisaturno,vzisaturno,xiurano,yiurano,ziurano,vxiurano,vyiurano,vziurano;
double x0neptuno,y0neptuno,z0neptuno,vx0neptuno,vy0neptuno,vz0neptuno,x0pluton,y0pluton,z0pluton,vx0pluton,vy0pluton,vz0pluton;
double xineptuno,yineptuno,zineptuno,vxineptuno,vyineptuno,vzineptuno,xipluton,yipluton,zipluton,vxipluton,vyipluton,vzipluton;
datos = fopen("datosplanetas.txt","r");
// Escaneo de los datos de mercurio
fscanf(datos,"%lf %lf %lf %lf %lf %lf %lf %lf",&x0mercurio,&y0mercurio,&z0mercurio,&vx0mercurio,&vy0mercurio,&vz0mercurio,&tmercurio,&cmercurio);
//Escaneo de los datos de venus
fscanf(datos,"%lf %lf %lf %lf %lf %lf %lf %lf",&x0venus,&y0venus,&z0venus,&vx0venus,&vy0venus,&vz0venus,&tvenus,&cvenus);
//Escaneo de los datos de la tierra
fscanf(datos,"%lf %lf %lf %lf %lf %lf %lf %lf",&x0tierra,&y0tierra,&z0tierra,&vx0tierra,&vy0tierra,&vz0tierra,&ttierra,&ctierra);
//Escaneo de los datos de marte
fscanf(datos,"%lf %lf %lf %lf %lf %lf %lf %lf",&x0marte,&y0marte,&z0marte,&vx0marte,&vy0marte,&vz0marte,&tmarte,&cmarte);
//Escaneo de los datos de jupiter
fscanf(datos,"%lf %lf %lf %lf %lf %lf %lf %lf",&x0jupiter,&y0jupiter,&z0jupiter,&vx0jupiter,&vy0jupiter,&vz0jupiter,&tjupiter,&cjupiter);
//Escaneo de los datos de saturno
fscanf(datos,"%lf %lf %lf %lf %lf %lf %lf %lf",&x0saturno,&y0saturno,&z0saturno,&vx0saturno,&vy0saturno,&vz0saturno,&tsaturno,&csaturno);
//Escaneo de los datos de urano
fscanf(datos,"%lf %lf %lf %lf %lf %lf %lf %lf",&x0urano,&y0urano,&z0urano,&vx0urano,&vy0urano,&vz0urano,&turano,&curano);
//Escaneo de los datos de neptuno
fscanf(datos,"%lf %lf %lf %lf %lf %lf %lf %lf",&x0neptuno,&y0neptuno,&z0neptuno,&vx0neptuno,&vy0neptuno,&vz0neptuno,&tneptuno,&cneptuno);
//Escaneo de los datos de pluton
fscanf(datos,"%lf %lf %lf %lf %lf %lf %lf %lf",&x0pluton,&y0pluton,&z0pluton,&vx0pluton,&vy0pluton,&vz0pluton,&tpluton,&cpluton);
fclose(datos);
G=(4*(pow(pi,2)));
//MERCURIO
mercurio = fopen("mercurio.txt","w");
fprintf(mercurio,"x0mercurio\t y0mercurio\t z0mercurio\t vx0mercurio\t vy0mercurio\t vz0mercurio\t");
z=(tmercurio/cmercurio);
contador=0;
for (i=0;i<=z;i++) {
rmercurio=(sqrt((pow(x0mercurio,2))+(pow(y0mercurio,2))+(pow(z0mercurio,2))));
ximercurio = x0mercurio +(vx0mercurio*cmercurio);
yimercurio = y0mercurio +(vy0mercurio*cmercurio);
zimercurio = z0mercurio +(vz0mercurio*cmercurio);

vximercurio = vx0mercurio-(cmercurio*((((G*Msol*x0mercurio))/(pow(rmercurio,3)))));
vyimercurio = vy0mercurio -(cmercurio*((((G*Msol*y0mercurio))/(pow(rmercurio,3)))));
vzimercurio = vz0mercurio -(cmercurio*((((G*Msol*z0mercurio))/(pow(rmercurio,3)))));

if (contador%1000==0) {
fprintf(mercurio,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",ximercurio,yimercurio,zimercurio,vximercurio,vyimercurio,vzimercurio);
}
x0mercurio=ximercurio;
y0mercurio=yimercurio;
z0mercurio=zimercurio;
vx0mercurio=vximercurio;
vy0mercurio=vyimercurio;
vz0mercurio=vzimercurio;

contador++;
}
fclose(mercurio);
//VENUS
venus = fopen("venus.txt","w");
fprintf(venus,"x0venus\t y0venus\t z0venus\t vx0venus\t vy0venus\t vz0venus\t");
z=(tvenus/cvenus);
contador=0;
for (i=0;i<=z;i++) {
rvenus=(sqrt((pow(x0venus,2))+(pow(y0venus,2))+(pow(z0venus,2))));
xivenus = x0venus +(vx0venus*cvenus);
yivenus = y0venus +(vy0venus*cvenus);
zivenus = z0venus +(vz0venus*cvenus);

vxivenus = vx0venus -(cvenus*((((G*Msol*x0venus))/(pow(rvenus,3)))));
vyivenus = vy0venus -(cvenus*((((G*Msol*y0venus))/(pow(rvenus,3)))));
vzivenus = vz0venus -(cvenus*((((G*Msol*z0venus))/(pow(rvenus,3)))));

if (contador%1000==0) {
fprintf(venus,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",xivenus,yivenus,zivenus,vxivenus,vyivenus,vzivenus);
}
x0mercurio=xivenus;
y0mercurio=yivenus;
z0mercurio=zivenus;
vx0mercurio=vxivenus;
vy0mercurio=vyivenus;
vz0mercurio=vzivenus;

contador++;
}
fclose(venus);
//TIERRA
tierra = fopen("tierra.txt","w");
fprintf(tierra,"x0tierra\t y0tierra\t z0tierra\t vx0tierra\t vy0tierra\t vz0tierra\t");
z=(ttierra/ctierra);
contador=0;
for (i=0;i<=z;i++) {
rtierra=(sqrt((pow(x0tierra,2))+(pow(y0tierra,2))+(pow(z0tierra,2))));
xitierra = x0tierra +(vx0tierra*ctierra);
yitierra = y0tierra +(vy0tierra*ctierra);
zitierra = z0tierra +(vz0tierra*ctierra);

vxitierra = vx0tierra -(ctierra*((((G*Msol*x0tierra))/(pow(rtierra,3)))));
vyitierra = vy0tierra -(ctierra*((((G*Msol*y0tierra))/(pow(rtierra,3)))));
vzitierra = vz0tierra -(ctierra*((((G*Msol*z0tierra))/(pow(rtierra,3)))));

if (contador%1000==0) {
fprintf(tierra,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",xitierra,yitierra,zitierra,vxitierra,vyitierra,vzitierra);
}
x0tierra=xitierra;
y0tierra=yitierra;
z0tierra=zitierra;
vx0tierra=vxitierra;
vy0tierra=vyitierra;
vz0tierra=vzitierra;

contador++;
}
fclose(tierra);
//MARTE
marte = fopen("marte.txt","w");
fprintf(tierra,"x0marte\t y0marte\t z0marte\t vx0marte\t vy0marte\t vz0marte\t");
z=(tmarte/cmarte);
contador=0;
for (i=0;i<=z;i++) {
rmarte=(sqrt((pow(x0marte,2))+(pow(y0marte,2))+(pow(z0marte,2))));
ximarte = x0marte +(vx0marte*cmarte);
yimarte = y0marte +(vy0marte*cmarte);
zimarte = z0marte +(vz0marte*cmarte);

vximarte = vx0marte -(cmarte*((((G*Msol*x0marte))/(pow(rmarte,3)))));
vyimarte = vy0marte -(cmarte*((((G*Msol*y0marte))/(pow(rmarte,3)))));
vzimarte = vz0marte -(cmarte*((((G*Msol*z0marte))/(pow(rmarte,3)))));

if (contador%1000==0) {
fprintf(marte,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",ximarte,yimarte,zimarte,vximarte,vyimarte,vzimarte);
}
x0marte=ximarte;
y0marte=yimarte;
z0marte=zimarte;
vx0marte=vximarte;
vy0marte=vyimarte;
vz0marte=vzimarte;

contador++;
}
fclose(marte);
//JUPITER
jupiter = fopen("jupiter.txt","w");
fprintf(jupiter,"x0jupiter\t y0jupiter\t z0jupiter\t vx0jupiter\t vy0jupiter\t vz0jupiter\t");
z=(tjupiter/cjupiter);
contador=0;
for (i=0;i<=z;i++) {
rjupiter=(sqrt((pow(x0jupiter,2))+(pow(y0jupiter,2))+(pow(z0jupiter,2))));
xijupiter = x0jupiter +(vx0jupiter*cjupiter);
yijupiter = y0jupiter +(vy0jupiter*cjupiter);
zijupiter = z0jupiter +(vz0jupiter*cjupiter);

vxijupiter = vx0jupiter -(cjupiter*((((G*Msol*x0jupiter))/(pow(rjupiter,3)))));
vyijupiter = vy0jupiter -(cjupiter*((((G*Msol*y0jupiter))/(pow(rjupiter,3)))));
vzijupiter = vz0jupiter -(cjupiter*((((G*Msol*z0jupiter))/(pow(rjupiter,3)))));

if (contador%1000==0) {
fprintf(jupiter,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",xijupiter,yijupiter,zijupiter,vxijupiter,vyijupiter,vzijupiter);
}
x0jupiter=xijupiter;
y0jupiter=yijupiter;
z0jupiter=zijupiter;
vx0jupiter=vxijupiter;
vy0jupiter=vyijupiter;
vz0jupiter=vzijupiter;

contador++;
}
fclose(jupiter);
//SATURNO
saturno = fopen("saturno.txt","w");
fprintf(saturno,"x0saturno\t y0saturno\t z0saturno\t vx0saturno\t vy0saturno\t vz0saturno\t");
a=(tsaturno/csaturno);
contador1=0;
for (i=0;i<=a;i++) {
rsaturno=(sqrt((pow(x0saturno,2))+(pow(y0saturno,2))+(pow(z0saturno,2))));
xisaturno = x0saturno +(vx0saturno*csaturno);
yisaturno = y0saturno +(vy0saturno*csaturno);
zisaturno = z0saturno +(vz0saturno*csaturno);

vxisaturno = vx0saturno -(csaturno*((((G*Msol*x0saturno))/(pow(rsaturno,3)))));
vyisaturno = vy0saturno -(csaturno*((((G*Msol*y0saturno))/(pow(rsaturno,3)))));
vzisaturno = vz0saturno -(csaturno*((((G*Msol*z0saturno))/(pow(rsaturno,3)))));

if (contador1%1000==0) {
fprintf(saturno,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",xisaturno,yisaturno,zisaturno,vxisaturno,vyisaturno,vzisaturno);
}
x0saturno=xisaturno;
y0saturno=yisaturno;
z0saturno=zisaturno;
vx0saturno=vxisaturno;
vy0saturno=vyisaturno;
vz0saturno=vzisaturno;

contador++;
}
fclose(saturno);
//URANO
urano = fopen("urano.txt","w");
fprintf(urano,"x0urano\t y0urano\t z0urano\t vx0urano\t vy0urano\t vz0urano\t");
b=(turano/curano);
contador2=0;
for (i=0;i<=b;i++) {
rurano=(sqrt((pow(x0urano,2))+(pow(y0urano,2))+(pow(z0urano,2))));
xiurano= x0urano +(vx0urano*curano);
yiurano = y0urano +(vy0urano*curano);
ziurano = z0urano +(vz0urano*curano);

vxiurano = vx0urano -(curano*((((G*Msol*x0urano))/(pow(rurano,3)))));
vyiurano = vy0urano -(curano*((((G*Msol*y0urano))/(pow(rurano,3)))));
vziurano = vz0urano -(curano*((((G*Msol*z0urano))/(pow(rurano,3)))));

if (contador2%1000==0) {
fprintf(urano,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",xiurano,yiurano,ziurano,vxiurano,vyiurano,vziurano);
}
x0urano=xiurano;
y0urano=yiurano;
z0urano=ziurano;
vx0urano=vxiurano;
vy0urano=vyiurano;
vz0urano=vziurano;

contador2++;
}
fclose(urano);
//NEPTUNO
neptuno = fopen("neptuno.txt","w");
fprintf(neptuno,"x0neptuno\t y0neptuno\t z0neptuno\t vx0neptuno\t vy0neptuno\t vz0neptuno\t");
c=(tneptuno/cneptuno);
contador3=0;
for (i=0;i<c;i++) {
rneptuno=(sqrt((pow(x0neptuno,2))+(pow(y0neptuno,2))+(pow(z0neptuno,2))));
xineptuno = x0neptuno +(vx0neptuno*cneptuno);
yineptuno = y0neptuno +(vy0neptuno*cneptuno);
zineptuno = z0neptuno +(vz0neptuno*cneptuno);

vxineptuno = vx0neptuno -(cneptuno*((((G*Msol*x0neptuno))/(pow(rneptuno,3)))));
vyineptuno = vy0neptuno -(cneptuno*((((G*Msol*y0neptuno))/(pow(rneptuno,3)))));
vzineptuno = vz0neptuno -(cneptuno*((((G*Msol*z0neptuno))/(pow(rneptuno,3)))));

if (contador3%1000==0) {
fprintf(neptuno,"%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n",xineptuno,yineptuno,zineptuno,vxineptuno,vyineptuno,vzineptuno);
}
x0neptuno=xineptuno;
y0neptuno=yineptuno;
z0neptuno=zineptuno;
vx0neptuno=vxineptuno;
vy0neptuno=vyineptuno;
vz0neptuno=vzineptuno;

contador3++;
}
fclose(neptuno);
//PLUTON
pluton = fopen("pluton.txt","w");
fprintf(pluton,"x0pluton\t y0pluton\t z0pluton\t vx0pluton\t vy0pluton\t vz0pluton\t");
d=(tpluton/cpluton);
contador4=0;
for (i=0;i<d;i++) {
rpluton=(sqrt((pow(x0pluton,2))+(pow(y0pluton,2))+(pow(z0pluton,2))));
xipluton = x0pluton +(vx0pluton*cpluton);
yipluton = y0pluton +(vy0pluton*cpluton);
zipluton = z0pluton +(vz0pluton*cpluton);

vxipluton = vx0pluton -(cpluton*((((G*Msol*x0pluton))/(pow(rpluton,3)))));
vyipluton = vy0pluton -(cpluton*((((G*Msol*y0pluton))/(pow(rpluton,3)))));
vzipluton = vz0pluton -(cpluton*((((G*Msol*z0pluton))/(pow(rpluton,3)))));

if (contador4%1000==0) {
fprintf(pluton,"%lf,\t %lf,\t %lf,\t %lf,\t %lf,\t %lf,\n",xipluton,yipluton,zipluton,vxipluton,vyipluton,vzipluton);
}
x0pluton=xipluton;
y0pluton=yipluton;
z0pluton=zipluton;
vx0pluton=vxipluton;
vy0pluton=vyipluton;
vz0pluton=vzipluton;
contador4++;
}
fclose(pluton);



 


return 0;
}
