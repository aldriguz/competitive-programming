#include<stdio.h>
main(){int a,b,n;unsigned s=0;
scanf("%d",&n);while(n){scanf("%d%d",&a,&b);b++;
while(a<b){s=(a*(a+1)*(a+2))%100+s;a++;}
printf("%d\n",s%100);s=0;n--;}}
