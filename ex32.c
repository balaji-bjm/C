#include<stdio.h>
#include<string.h>
void main()
{
    char a[2][100];
    for(int i=0;i<2;i++)
    {
        gets(a[i]);
    }
    printf("%s\n",a[0]);
    printf("%s\n",a[1]);
}