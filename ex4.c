#include<stdio.h>
int main()
{
    int x,y,z,check,ans;
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        x-=z;
    }
    else
    {
        y-=z;
    }
    ans=x-y;
    printf("%d",ans);
    return 0;
}