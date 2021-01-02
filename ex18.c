#include<stdio.h>
#include<string.h>
int main()
{
    char d[50],f_half[50],s_half[50];
    int len;
    scanf("%s",&d);
    len=strlen(d);
    len=len/2;
    for(int i=0;i<len;i++)
    {
        f_half[i]=d[i];
    }
    int j=len;
    for(int i=0;i<len;i++)
    {
        while(j<strlen(d))
        {
            s_half[i]=d[j];
        }
        j++;
    }
    printf("%s\n",s_half);
    printf("%s%s",strrev(f_half),strrev(s_half));
    return 0;
}