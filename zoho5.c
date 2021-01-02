#include<stdio.h>
void getInput(int a[],int n) {
	int i=0;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
} 
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	getInput(a,n);
	getInput(b,m);
	int i,j;
	i=j=0;
	while( i<n && j<m ) {
		if(a[i]==b[j]) {
			printf("%d ",a[i]);
			i++;
			j++;
		}
		else if(a[i]<=b[j]) {
			printf("%d ",a[i]);
			i++;
		}
		else {
			printf("%d ",b[j]);
			j++;
		}
	}
	while(i<n) printf("%d ",a[i++]);
	while(j<m) printf("%d ",b[j++]);
	return 1;
}
