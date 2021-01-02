#include<stdio.h>
#include<string.h>
int isEmpty(int n) {
	if(n==-1) return 1;
	return 0;
}
int findLen(char s[]) {
	int i;
	for(i=0;s[i]!='\0';i++);
	return i;
}
int check(char a) {
	if((a>='A' && a<='Z') || (a>='a' && a<='z')) 
		return 1;
	return 0;
}
int main() {
	char s[]="(a)";//bc)((de))";
	int len=findLen(s);
	//printf("%d",len);
	char b[20];
	char temp[]="";
	char a[10][50];
	int btop=-1;
	int atop=-1;
	int i,j;
	for(i=0;i<len;i++) {
		if(check(s[i])) {
			atop++;printf("1");
			while(check(s[i])) {
				strcpy(temp,s[i]);
				strcat(a[atop],temp);
				i++;
				
			}
			strcpy(a[atop],temp);
			if(atop>0) {
				strcat(a[atop-1],a[atop]);
				atop--;
			}
			i--;
			printf("1");
		}
		else if(s[i]=='(') {
			btop++;
			b[btop]=s[i];
			printf("2");
		}
		else {
			printf("3");
			strcpy(temp,'(');
			btop--;
			strcat(temp,a[atop]);
			strcat(temp,')');
			strcpy(a[atop],temp);
			
		}
	}
	return 1;
}
