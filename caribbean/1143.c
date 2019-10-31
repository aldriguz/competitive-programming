#include<stdio.h>
main()
{ char x[200];
  int n,i,j,c,a,y;
  while(1)
  {scanf("%d",&n);
   if(n==0) break;
   scanf("%s",c);
   i=0;c=0;j=0;
   while(x[i]) i++;
   while(c<i)
   {printf("%c",x[j]);
    c++;



   }
  }
}
