#include<stdio.h>
int main()
{
    int i,N,K,sum=0;
    int a[5];
    scanf("%d %d",&N,&K);
    for(i=1;i<=N;i++)
    {
        scanf("%d",a[i]);
    }
       for(i=1;i<=K;i++)
       {
        sum=sum+a[i];   
       }
    printf("%d",sum);
    return 0;
}
