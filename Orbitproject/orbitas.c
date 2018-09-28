int dias[n],i,j,k,Msol;

double pi=3.141592653589793238;

archivo = fopen("resultados.txt","w");

fprintf(archivo,"x0\t y0\t z0\t vx0\t vy0\t vz0\t");
for(j=0;j<n;j++){
scanf("%i",dias[j]);
for (k=0;k<n;k++){
h=ti-t0;
for (i=0;i<n;i++){
xi = x0 +(vx0*h);
yi = y0 +(vy0*h);
zi = z0 +(vz0*h);

vxi = vx0 -(h*((G*Mtierra*x0))/UA);
vyi = vy0 -(h*((G*Mtierra*y0))/UA);
vzi = vz0 -(h*((G*Mtierra*z0))/UA);

h=ti-t0;

G=(4*(pow(pi,2))*UA*(pow(years,-2))*(Mtierra));
}
}
fprintf(archivo,"%f\t %f\t %f\t %f\t %f\t %f\t",x0,y0,z0,vx0,vy0,vz0);
}
fclose(archivo);
