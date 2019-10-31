#include<stdio.h>
main()
{int x[10],j,i=0,a,n=0,y=0;
for(j=0;j<10;j++)
{scanf("%d",&a);
while(x[i]!=(a%42)&&i<n)i++;
if(i>y)y=i;n=y+1;
x[i]=a%42;
i=0;}printf("%d",y+1);}
