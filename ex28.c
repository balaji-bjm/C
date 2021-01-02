#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,inc,space,temp_space,odd,end;
    end=(n*2)-1;
    space=n-1;
    //printf("%d\n",odd);
    for(i=1;i<=n;i++)
    {
        temp_space=space;
        for(j=1;j<=end;j++)
        {
            if(temp_space!=0)
            {
                printf(" ");
                temp_space--;
            }
            else if(i==1)
            {
                printf("1\n");
                break;
            }
            else
            {
                for(inc=i;inc<=odd;inc++)
                    printf("%d",inc);
                while (--inc!=i)
                {
                    printf("%d",inc-1);
                }
                printf("\n");
                odd+=2;
                break;
            }
        }
        space--;
    }
    return 0;
}