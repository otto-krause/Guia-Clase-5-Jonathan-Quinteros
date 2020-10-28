#include<stdio.h>
#include<stdlib.h>
int main(){
int num,p,i,t;
t=1;
printf("ingrese un numero \n");
scanf("%d",&num);
printf("ingrese una potencia \n");
scanf("%d",&p);
for (i=1; i<=p; i++){
t=t*num;
}
printf("el resultado es %d \n",t);
return 0;
}
