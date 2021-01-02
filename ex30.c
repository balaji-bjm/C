#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    gets(s);
    char *p;
    p=s;
    for(int i=(strlen(s)-1);i>=0;i--)
    {
        printf("%c",*(p+i));
    }
    return 0;
}