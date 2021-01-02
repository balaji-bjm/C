#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int n;
    char c[10];
    scanf("%[^\n]",&s);
    scanf("%d%s",&n,&c);
    for(int i=0;i<n-1;i++)
    {
        printf("%c",s[i]);
    }
    printf("%s",c);
    int v,m;
    v=strlen(s);
    for(int j=n-1;j<=v;j++)
    {
        printf("%c",s[j]);
    }
    return 0;
}  
