#include<stdio.h>
#include<string.h>
void print(char s) {
	printf("%c",s);
	return;
}
int check(char o) {
	if(o=='+' || o=='-')
		return 1;
	else if(o=='/' || o=='*')
		return 2;
	else if(o=='^')
		return 3;
	return -1;
	
}
char stack[100];
int top=-1,comp=0;
void postFix(char *s,int len) {
	int i=0;
	
	while(s[i]!='\0') {
		if( (s[i]<='Z' && s[i]>='A') || (s[i]<='z' && s[i]>='a')) {
			print(s[i]);
		}
		else if(s[i]=='(') {
			stack[++top]=s[i];
		}
		else if(s[i]==')') {
			while(stack[top]!='(') {
				print(stack[top]);
				top--;
			}
			top--;
		}
		else if( s[i]=='(') {
			stack[++top]='(';
		}
		else {
			while(top!=-1 && check(stack[top])>=check(s[i])) {
				printf("%c",stack[top]);
				top--;
			}
			stack[++top]=s[i];
		}
		//if(top!=-1) printf("%c\n",stack[top]);
		i++;
	}
	while(top!=-1) {
		print(stack[top]);
		top--;
	}
} 
int main() {
	//char s[100]="A+B*C+D";
	char s[100]="a+b*(c^d-e)^(f+g*h)-i";
	//int n=1;
	//while(n) {
	//	scanf("%d%s",&n,s);
	int len=strlen(s);
	postFix(s,len);
//}
	return 1;
}
