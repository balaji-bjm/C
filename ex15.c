#include<stdio.h>
int main()
{
    int r,k,n,m,v,u;
    scanf("%d%d",&n,&m);
    if(10<m)
    { m=m%10; }
    int a[n],b[n];
    v=n-m; u=n-v; r=u;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i<=(v-1))
        {
            b[i]=a[i+m];
        }
        else
        {
            b[i]=a[u-r];
            u++;
        }    
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}