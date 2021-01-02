#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int main() {
	char s[]="121";
	int sum=0,len=strlen(s),index=0;
	while(index<len) {
		char add;
		add=s[index];
		sum+=atoi(add);
		printf("%c ",add);
		//printf("%d ",atoi(add));
		index++;
	}
	printf("\n%d",sum);
	return 0;
}
