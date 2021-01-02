#include<stdio.h>
int main()
{
	char n[10];
	scanf("%s",&n);
	printf("%c",*(n+1));
	return 0;
}
