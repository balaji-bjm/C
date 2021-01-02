#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10][10];
    char s2[10][10];
    int sum1=0,sum2=0,n=2;
    for(int i=0;i<2;i++)
        scanf("%s",&s1[i]);
    for(int i=0;i<2;i++)
        scanf("%s",&s2[i]);
    while(n<=0)
    {    
    for(int i=0;i<2;i++)
        {   
            if(!strcmp(s1[i],"R"))
            {
                sum1++;
            }
            if(!strcmp(s2[i+1],"R"))
                sum2++;
        }
    printf("%d",sum1);
    printf("%d",sum2);
        if(sum1>=1&&sum2>=1)
            break;
        
    }
    return 0;
}
