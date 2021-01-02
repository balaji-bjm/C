#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(((x<100)&&(y<100))&&((x>-100)&&(y>-100)))
    {
        printf("%d\n",x&y);
        printf("%d\n",x|y);
        printf("%d\n",~x);
        printf("%d\n",x^y);
        printf("%d\n",x<<1);
        printf("%d",x>>1);
    }
    else
    {
        printf("Invalid");
    }
    
    return 0;
}