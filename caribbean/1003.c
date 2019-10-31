#include<stdio.h>
main()
{int n,a,b,c[4]={0,0,0,0},i=0,x,y;
scanf("%d",&n);
while(n)
{scanf("%d%d",&a,&b);y=a;
while(b){while(a)
{scanf("%d",&x);
c[i]=x+c[i];i++;a--;}
a=y;i=0;b--;}x=i=0;a=y;
while(a)
{if(c[i]>c[x])x=i;i++;a--;}
printf("%d\n",x+1);
c[0]=c[1]=c[2]=c[3]=0;
i=0;n--;}}
