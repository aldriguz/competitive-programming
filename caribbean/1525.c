#include<stdio.h>
int f(int i,int j,int c)
{if(i%2!=0&&j%2!=0)
{c=c+c+c+c;return(f(i/2,j/2,c)+c);}
else return 0;}
main(){int i,j,c;scanf("%d%d",&i,&j);
if(i%2!=0&&j%2!=0)
{c=1;c=f(i/2,j/2,c)+c;}
else c=0;printf("%d",c);}
