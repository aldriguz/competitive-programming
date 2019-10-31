#include<stdio.h>
int main()
{int a,b,s=0,x;
scanf("%d%d",&a,&b);
x=b;
while(a)
{while(b)
{s=(a%10)*(b%10)+s;
b=b/10;}
b=x;a=a/10;
}printf("%d",s);return 0;}
