#include<stdio.h>
int main()
{
    int n,m,sum=0,r1=1,r2=1,r3=1,row1=0,row2=0,row3=0,col1=0,col2=0,col3=0;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
        for(int j=i;j==i;j++)
            sum+=a[i][j];
    for(int i=0;i<1;i++)
        for(int j=0;j<m;j++){
            row1+=a[i][j];
            r1*=a[i][j];}
    for(int i=1;i<2;i++)
        for(int j=0;j<m;j++){
            row2+=a[i][j];
            r2*=a[i][j];}
    for(int i=2;i<n;i++)
        for(int j=0;j<m;j++){
            row3+=a[i][j];
            r3*=a[i][j];}
    for(int i=0;i<n;i++)
        for(int j=0;j<1;j++)
            col1+=a[i][j];
    for(int i=0;i<n;i++)
        for(int j=1;j<2;j++)
            col2+=a[i][j];
    for(int i=0;i<n;i++)
        for(int j=2;j<m;j++)
            col3+=a[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<1;j++)
            printf("%d ",a[i][j]);
    printf("\n");
    for(int i=0;i<n;i++)
        for(int j=1;j<2;j++)
            printf("%d ",a[i][j]);
    printf("\n");
    for(int i=0;i<n;i++)
        for(int j=2;j<m;j++)
            printf("%d ",a[i][j]);
    int b=((sum==15)&&(row1==15)&&(row2==15)&&(row3==15)&&(col1==15)&&(col2==15)&&(col3==15));
    if(b)
    {
        printf("\nnot a magic square");
    }
    else
    {
        printf("\nmagic square");
    }
    printf("\ndeterminant %d",r1+r2+r3);
    
    printf("\n%d\n",sum);
    printf("%d %d %d\n",row1,row2,row3);
    printf("%d %d %d\n",col1,col2,col3);
    return 0;
            
}