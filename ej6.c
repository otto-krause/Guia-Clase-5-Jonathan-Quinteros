#include<stdio.h>
#include<stdlib.h>
int main(){
float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,np,c,pc,nt;
c=0;
int i;
for (i=1; i<=30; i++){
printf("ingrese 10 notas \n");
scanf("%f %f %f %f %f %f %f %f %f %f",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
nt=n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
np=nt/10;
printf("el promedio del alumno es %f \n",np);
}
pc=c/30;
printf("el promedio de la clase es %f \n",pc);
return 0;
}
