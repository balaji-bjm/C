#include<stdio.h>
#include<string.h>
struct sec
{
    char name[20];
    char des[50];
    char dep[30];
    int salary;
};

int main()
{
    struct sec check;
    scanf("%s%s%s%d",&check.name,&check.des,&check.dep,&check.salary);
    
    if(!strcmp(check.des,"Secretary") || !strcmp(check.des,"Additional_Secretary"))
    {
       printf("Air travel is allowed") ;
    }
    else if(!strcmp(check.des,"Joint_Secretary") || !strcmp(check.des,"Deputy_Secretary"))
    {
        if(check.salary>20000)
        {
            printf("Air travel is allowed");
        }
        else
        {
            printf("Air travel is not allowed");
        }
    }
    else if(!strcmp(check.des,"Under_Secretary") && !strcmp(check.dep,"Marketing"))
    {
        printf("Air travel is allowed");
    }
    else
    {
        printf("Air travel is not allowed");
    }
    return 0;
}