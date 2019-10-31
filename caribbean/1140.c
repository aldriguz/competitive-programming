#include<stdio.h>
main()
{  char n[1000000];
   int c=0,i=1,j=0,x,a,b=0,k;
   scanf("%d",&a);
   while(a)
   {scanf("%s",n);
    while(n[c])
     {n[c]=n[c]-48;
      c++;j++;}
    while(c)
     {n[c]=n[c-1];c--;}
      n[0]=0;
      c=x=j;
    while(1)
    { n[c]++;
      while(n[c]==9)
       {n[c]=0;c--;puts("qwe");}
      c=j;
      printf("%d%d%d%d%d",n[0],n[1],n[2],n[4],c);
      getchar();
      while(i<(j+1)/2)
      { if(n[i]!=n[x]){ b=1; break;}
        i++;x--;
      }
      if(!b) break;
    }
    i=0;
    puts("5");
    while(i<j)
    {n[i]=n[i+1]+48;i++;}
    n[j]=0;
    printf("%s\n",n);
    c=j=b=0;i=1;
   a--;
   }}
