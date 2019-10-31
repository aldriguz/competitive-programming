#include<stdio.h>
main()
{int a,b,c;char x[3];scanf("%d%d%d%s",&a,&b,&c,x);
 if(x[0]=='A'&&x[1]=='B'&&x[2]=='C')printf("%d %d %d",a,b,c);
 if(x[0]=='A'&&x[1]=='C'&&x[2]=='B')printf("%d %d %d",a,c,b);
 if(x[0]=='B'&&x[1]=='A'&&x[2]=='C')printf("%d %d %d",b,a,c);
 if(x[0]=='B'&&x[1]=='C'&&x[2]=='A')printf("%d %d %d",b,c,a);
 if(x[0]=='C'&&x[1]=='B'&&x[2]=='A')printf("%d %d %d",c,b,a);
 if(x[0]=='C'&&x[1]=='A'&&x[2]=='B')printf("%d %d %d",c,a,b);
}
