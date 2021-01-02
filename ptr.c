/*#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i;
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	{
		char temp=s[i];
		int count=1;
		while(i<strlen(s) && s[i]==s[i+1])
		{
			count++;
			i++;
		}
		printf("%c%d",temp,count);
	}
	return 0;
}*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,j=0;
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	{
		int count=0;
		char temp=s[i];
		while(j<strlen(s))
		{
			count++;
			j++;
		}
		}
