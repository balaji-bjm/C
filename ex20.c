#include<stdio.h>
#include<string.h>
int main()
{
    char d[50],left[50];
    scanf("%s",&d);
    int len,m;
    len=strlen(d);
    m=len/2;
    int j=0;
    for(int i=m-1;i>=0;i--)
    {
        left[j++]=d[i];
    }
    //printf("%s",left);
    for(int i=len-1;i>=m;i--)
    {
        left[j++]=d[i];
    }
    printf("%s",left);
    return 0;
}