#include<stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
for(i=0;i<n;i++)
	{
		n=n/10;
		count++;
	}
	printf("%d",count);
	return 0;
}
