#include <stdio.h>
#include <stdlib.h>
int main() {
	int condition;
	scanf("%d",&condition);
	int flag=0,i;
	int dif=0,difCopy=0;
	while(flag<condition) {
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int check=0;
	    for(i=0;i<n-1;i++)
	        scanf("%d",&a[i]);
	    if(n-1==1) 
	    	printf("%d",a[0]-1);
	    for(i=0;i<n-1;i++) {
	            dif = a[i]-a[i+1];
	            if(difCopy==0)
	                difCopy= dif;
	            if(difCopy!=dif) {
	                printf("%d",a[i]+difCopy);
	                break;
	            }
	    }
	    flag++;
	}
	return 0;
}
