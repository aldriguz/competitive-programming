#include<stdio.h>
main(){int n=0,b,i,j=0,x;
char c[1000],a[1000];scanf("%s",c);a[0]=c[0];
while(c[n])n++;
for(i=1;i<n;i++){b=c[i];
while(j<i){if(b<=a[j])break;
j++;}if(j==i){a[i]=b;j=0;continue;}
while(j<i){x=a[j];a[j]=b;b=x;j++;}
a[j]=b;j=0;}a[n]=0;printf("%s\n",a);}
