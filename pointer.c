#include<stdio.h>
int main()
{
  int n,m;
  scanf("%d%d",&n,&m);
  int a[n][m];
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      scanf("%d",&a[i][j]);
  int k=0,l=0;
  while(k<n && l<m)
  {
    for(int i=l;i<m;i++)
      printf("%d ",a[k][i]);
    k++;
    for(int i=k;i<n;i++)
      printf("%d ",a[i][m-1]);
    m--;
    if(k<n)
    {
      for(int i=m-1;i<n;i--)
        printf("%d ",a[n-1][i]);
      n--;
    }
  }
}