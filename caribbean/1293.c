#include<stdio.h>
main()
{int n,x[81],i=0,a=0,y=0,b=1;
scanf("%d",&n);
x[80]=1;
while(n)
{i=80;while(y<b)
{x[i]=x[i]+x[i]+a;
if(x[i]>9)
{ a=1;x[i]=x[i]%10;}
else a=0;y++,i--;
}n--;
}
while(i<81)
{printf("%d",x[i]);i++;}}
