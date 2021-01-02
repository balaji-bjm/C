// odd and even numbers of array
#include<stdio.h>
void swap(int *n1,int *n2) {
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
void sort(int a[],int len) {
	int i,j;
	for(i=0;i<len;i++) 
		for(j=0;j<len-i-1;j++)
			if(a[j]>a[j+1])
				swap(&a[j],&a[j+1]);
}
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	int s;
	for(s=0;s<n;s++) 
		scanf("%d",&a[s]);
	int div=0;
	div=n/2;
	int o[div],e[n-div];
	int i,j,odd=0,eve=0;
	for(i=0;i<n;i++) {
		if(i%2!=0)
			o[odd++]=a[i];
		else
			e[eve++]=a[i];
	}
	sort(o,odd);
	sort(e,eve);
	j=0;
	eve--;
	for(i=0;i<n;i++)
		if(i%2!=0) 
			printf("%d ",o[j++]);
		else
			printf("%d ",e[eve--]);
	
	printf("\n%d %d",div,n-div);
	return 1;
}
