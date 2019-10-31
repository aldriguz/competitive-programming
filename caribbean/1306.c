#include<stdio.h>
main(){char x[105];int n,i,a;
scanf("%d",&n);
while(n)
{scanf("%s",x);i=0;
while(1)
{if(!x[i])break;
x[i]=x[i]-48;i++;}
if(i>1)
a=x[i-1]+(x[i-2]*10);
if(a%4!=0||(i<2||x[0]==0))printf("NO\n");
else printf("YES\n");n--;}}
