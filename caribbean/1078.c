#include<stdio.h>
main()
{int n,a,x,y,s=0;
scanf("%d",&n);
printf("\n");
while(n)
{
    scanf("%d",&a);
    y=a;
    while(a)
    {   scanf("%d",&x);
        s=s+x;
        a--;}
    if(s%y==0)
        puts("YES");
    else puts("NO");
    n--;
    s=0;
    printf("\n");
}}

