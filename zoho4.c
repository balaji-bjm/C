// with out recurtion 
#include <stdio.h>
int findLen(char s[]) {
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
} 
int main() {
	int t;
	scanf("%d",&t);
	char s[10000],ss[10000];
	while(t--) {
    	scanf("%s%s",&s,&ss);
    	int len=findLen(s);
    	int slen=findLen(ss);
    	int i,j,count;
    	count=i=0;
    	while(i<len) {
    	    j=i;
    	    while(j<slen) {
    	        if(s[i]==ss[j]) {
    	            count++;
    	            break;
    	        }
    	        j++;
    	    }
    	    i++;
    	}
    	if(count==len) 
    	    printf("1\n");
    	else
    	    printf("0\n");
	}
	return 0;
}
//recursion fast execution
/*
int findLen(char s[]) {
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
} 
int isSubSequence(char str1[], char str2[], int m, int n) 
{ 
    // Base Cases 
    if (m == 0) return 1; 
    if (n == 0) return 0; 
  
    // If last characters of two strings are matching 
    if (str1[m-1] == str2[n-1]) 
        return isSubSequence(str1, str2, m-1, n-1); 
  
    // If last characters are not matching 
    return isSubSequence(str1, str2, m, n-1); 
} 
int main() {
	int t;
	scanf("%d",&t);
	char s[10000],ss[10000];
	while(t--) {
    	scanf("%s%s",&s,&ss);
    	int len=findLen(s);
    	int slen=findLen(ss);
    	if(isSubSequence(s, ss, len, slen)) 
    	    printf("1\n");
    	else
    	    printf("0\n");
	}
	return 0;
}
*/
