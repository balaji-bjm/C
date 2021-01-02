#include<stdio.h>
int len(char s[]) {
	int i;
	for(i=0;s[i]!='\0';i++);
	return i;
}
void str(char s[]) {
	int i=0;
	//printf("%c",*s);
	while(s[i]!=' ' && s[i]!='\0') {
		printf("%c",s[i]);
		i++;
	}
	printf(" ");
}
int main() {
	char s[100];
	scanf("%[^\n]s",s);
	int i,l=len(s);
	for(i=l-1;i>=-1;i--) {
		if(s[i]==' ' || i==-1) {
			str(s+i+1);
		}
	}
	return 1;
}
