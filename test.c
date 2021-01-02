#include<stdio.h>
#include<string.h>
int top=0;
void post(char s) {
	printf("%c",s);
	return;
}
int getValue(char s) {
	if( s=='+' || s=='-' )
		return 1;
	else if( s=='*' || s=='/' )
		return 2;
	return 3;
}
int checkPre(char stack,char s) {
	int vStack = getValue(stack);
	int  vS = getValue(s);
	if(vStack>vS)
		return 0;
	else if(vStack==vS || vStack<vS)
		return 1;
}
void string(char s[],int len) {
	int i;
	char stack[len];
	for(i=0;i<len;i++) {
		if( 'A'<=s[i] && 'Z'>=s[i] || 'a'<=s[i] && 'z'>=s[i] ) {
			post(s[i]);	
		}
		else if( top!=0 && stack[top-1]!='(' && s[i]!='(' && s[i]!=')') {
			int check=checkPre(stack[top-1],s[i]); //printf(" %d ",top);
			if(check) {
				stack[top++]=s[i];
			}
			else {
				post(stack[top-1]);
				stack[top-1]=s[i];	
			}
		}
		else if( s[i]=='(' ) {
			stack[top++]=s[i];
		} 
		else if(s[i]==')') {//printf("%d",top);
			while(stack[--top] != '(') {
				post(stack[top]);
			}
			//top--;
		}
		else {
			stack[top++]=s[i];//printf("%c",stack[1]);
		}
	}
	while(top>=0) {
		post(stack[--top]);
	}
	return;
} 
int main() {
	char s[50]="Z-(A+B*C-D)";
	//scanf("%s",&s);
	int len=strlen(s);
	string(s,len);
	return 0;
}
