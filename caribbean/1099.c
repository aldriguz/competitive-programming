#include<stdio.h>
main()
{   int a,b,c;
    while(1)
    {  scanf("%d",&a);
       if(!a)
          break;
       scanf("%d %d",&b,&c);
       if(a*a+b*b==c*c)
          printf("right\n");
       else
          printf("wron\n");
    }
}
