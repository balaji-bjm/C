#include <stdio.h>
int rec(int n,int j)
{
    if(n!=0)
    {
        return j+=n%10,rec(n/=10,j);
    }
    else
    {
        return j;
    }
    
}
int main()
{
    int m,b=0;
    scanf("%d",&m);
    printf("%d",rec(m,b));
    return 0;
}