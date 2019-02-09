#include <stdio.h>
int  main()
{
	int a=0;
	int i,n,b;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	  b=n%10;
	  a=(a*10)+b;
	  n/=10;
	}
	printf("%d",a);
	return 0;
}
