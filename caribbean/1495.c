#include<stdio.h>
main()
{int a[1000],n,b,i,j=0,x;
scanf("%d %d",&n,&a[0]);
for(i=1;i<n;i++)
{scanf("%d",&b);
while(j<i)
{if(b<=a[j]) break;
j++;}
if(j==i)
{a[i]=b;j=0;continue;}
while(j<i)
{x=a[j];
a[j]=b;
b=x;
j++;}
a[j]=b;
j=0;}
for(i=0;i<n;i++)
printf("%d\n",a[i]);}

