#include<stdio.h>
int main()
{
    int n,ans,sum=0,m;
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        sum+=m;
        n/=10;
    }
    ans=(sum>=10)?(sum-10):(10-sum);
    printf("%d",ans);
    return 0;
}