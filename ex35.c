#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s[10]="hello";
	for(i=0;i<10;i++)
	{
		if(*(s+i)!='\0')
			printf("%c",*(s+i));
	}
	return 0;
}








