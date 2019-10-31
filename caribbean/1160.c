#include<stdio.h>
main(){int x,y,i;scanf("%d",&i);for(i;i;i--){scanf("%d %d",&x,&y);if(y==x||y==x-2){ if(x%2==0)printf("%d\n",x+y);else printf("%d\n",x+y-1);}else puts("No Number\n");}}
