#include<stdio.h>
main()
{int a[31],n,i=0,c=0;
 while(1)
 {scanf("%d",&n);
  if(!n) break;
  while(n)
   {a[i]=n%2;
    if(a[i]) c++;
    n=n/2;
    i++;}
  printf("The parity of ");
  for(i=i;i>0;i--)
    printf("%d",a[i-1]);
  printf(" is %d (mod 2).\n",c);
  i=c=0;}}
