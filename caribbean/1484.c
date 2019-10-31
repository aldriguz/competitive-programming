#include<stdio.h>
int main()
{ int n,i=1,j=1;
float a,b;
scanf("%d %f",&n,&a);
while(n-1)
{ scanf("%f",&b);
if(b>=a)
{ i=j+1;
j++;
a=b;}
else j++;
n--;}
printf("%d",i);
return 0;
}
