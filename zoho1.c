 //print char with specific numbers
#include<stdio.h>
int check(char a) {
	if((a>='a'&& a<='z') || (a>='A'&& a<='Z') )
		return 1;
	return 0;
}
int main() {
	char s[20];
	scanf("%s",&s);
	int i=0,j=0,len=0;
	while(s[i]!='\0') {
		if(check(s[i])) {
			j=i+1;
			while(s[j]!='\0' && !check(s[j])) {
				len=(len*10)+(s[j]-'0');
				j++;
			}
			while(len--) {
				printf("%c",s[i]);
			}
		}
		i++;
		len=0;
	}
	return 1;
}
