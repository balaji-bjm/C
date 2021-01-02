#include<stdio.h>
#include<string.h>
int main()
{
    char s[100]="hello world",g[]="";
    int n=4,v;
    //scanf("%s",&s);
    //scanf("%d%s",&n,&g);
    v=strlen(s);
    for(int i=0;i<n;i++)
    {
        printf("%c",s[i]);
    }
    printf("%s",g);
    //printf("%d\n%s",n,g);
    return 0;
}