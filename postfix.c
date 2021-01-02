#include<stdio.h>
#include<string.h>
int add=0,top=0;
char ex[50];
void addEx(char s) {
	ex[add++]=s;
	printf("%c",s);
	return;
}
int check(char fo,char so) {
	return 1;
}
void stack(char s[],int len) {
	int i,size=0;
	char stack[len];
	for(i=0;i<len;i++) {
		if( 'A'<=s[i] && 'Z'>=s[i] || 'a'<=s[i] && 'z'>=s[i]) {
			addEx(s[i]);
			//printf("f ");
		}
		else {
			if(top==0) {
				stack[top++]=s[i];
				//printf("gggg");
				continue;
			}
			if( s[i]=='(' ) {
				stack[top++]=s[i];
				printf("hh");
				continue;	
			}
			if( s[i]==')' ) {
				for(i=top;i>=0;i--) {
					if(stack[top]=='(') {
						top--;
						break;
					}
					else {
						addEx(stack[top]);
						top--;
					}
				}
				continue;
			}
			if( stack[top]!='(' || stack[top]!=')' && s[i]!='(' || s[i]!=')' ) {
				int put=check(stack[top],s[i]);
				if(put) {
					stack[top++]=s[i];
					continue;
				}
				else {
					addEx(stack[top]);
					stack[top]=s[i];
					continue;
				}
			}
			stack[top]=s[i];
			//printf("ggjk");
		}
	}
	for(i=top;i>=0;i--) {
		if(top--!=0)
			addEx(stack[top]);
	}
}
int main() {
	//char s[50]="A+(B*C-(D/E^F)*G)*H";
	char s[50]="(A+B)";
	int len=strlen(s);
	stack(s,len);
	return 0;
}
