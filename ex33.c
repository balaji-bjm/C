#include<stdio.h>
int main()
{
    int a=5,b=5,c;
    char ch;
    printf("Enter the symbol + - * / \n");
    scanf("%c",ch);
    switch (ch)
    {
    case '+':
        c=a+b;
        break;
    case '-':
        c=a-b;
        break;
    case '*':
        c=a*b;
        break;
    case '/':
        c=a/b;
        break;
    }
    printf("\n %d",c);
    return 0;
}