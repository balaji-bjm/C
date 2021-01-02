#include<stdio.h>
int main()
{
    int l,w,h;
    scanf("%d%d%d",&l,&w,&h);
    if(l==w && l==h)
    {
        printf("ACCEPTED");
    }
    else if(l<w && l<h)
    {
        printf("CROP");
    }
    else if(w<l && w<h)
    {
        printf("CHANGE");
    }
    return 0;
}