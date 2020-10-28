#include<stdio.h>
#include <stdlib.h>
int main()
{
int suel,per,c,c1;
c=0;
c1=0;
for (per=1;per<=20;per++)
{
printf("Ingrese el sueldo de una persona \n");
scanf("%d",&suel);
if (suel>2000)
{
c=c+1;
}
else
{
c1=c1+1;
}
}
printf("%dLas persona que ganan mas de 2000 y %d los que ganan menos de 2000
",c,c1);
return 0;
}
