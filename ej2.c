#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
float num,num1,pro,t;
for (i=1; i<=15; i++)
{
printf("ingrese el numero\n");
scanf("%f",&num);
t=t+num;
if (num>num1)
{
num1=num;
}
}
pro=t/15;
printf("el promedio es %f\n",pro);
printf("el numero mayor es %f\n",num1);
return 0;
}
