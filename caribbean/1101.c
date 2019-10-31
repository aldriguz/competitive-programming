#include<stdio.h>
main()
{int a[18],n,n1,i=0,j,c,x,b;
scanf("%d",&b);
while(b)
{scanf("%d%d",&n,&n1);
while(n<=n1){
x=n;
while(x)
{a[i]=x%2;
x=x/2;
i++;}
c=i-1;j=0;
while(j<i/2)
{if(a[j]!=a[c]) break;
c--;j++;}
if(j==i/2) printf("%d ",n);
i=0;n++;
}b--;printf("\n");}}
