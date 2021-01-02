// X pattern of odd strings
#include<stdio.h>
int findLen(char s[]) {
	int i;
	for(i=0;s[i]!='\0';i++);
	return i;
}
int main() {
	char s[]="geeksforgeeks";
	int len=findLen(s);
	int backward=len-1;
	int i,j;
	for(i=0;i<len;i++)  {
		for(j=0;j<len;j++) {
			if(i==j)
				printf(" %c ",s[i]);
			else if( backward==j && backward==(len-1-i)  && ((len-1)/2)!=((len-1)-i) )
				printf("%c",s[backward]);
			else
				printf(" ");
		}
		printf("\n\n");
		backward--;
	}
	return 1;
}
