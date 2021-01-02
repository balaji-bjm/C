#include<stdio.h>
#include<string.h>
int main()
{
    char h[100],d[100],g[100];
    scanf("%s",&h);
    memset(h,'\0',sizeof(h));
    strcpy(g,h);
    strncpy(d,h,10);
    printf("%s",d);
    return 0;
}