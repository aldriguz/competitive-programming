#include<stdio.h>
main()
{ char x[200],y[100][100];
  int n,t,i,c,j,a;
  while(1)
  {scanf("%d",&n);
   if(n==0) break;
   scanf("%s",x);
   t=0;
   while(x[t])t++;
   a=t/n;
   c=0;j=0;i=0;
   while(c<t&&x[c])
   {  while(j<a&&x[c])
         {y[i][j]=x[c];c++;j++;}
      i++;
      while(j&&x[c])
        {y[i][j-1]=x[c];c++;j--;
        }
     i++;
   }
   for(j=0;j<n;j++)
     for(i=0;i<a;i++)
         printf("%c",y[j][i]);
  }
}

