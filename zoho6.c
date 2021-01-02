#include<stdio.h>
#include<math.h>
void swap(int *n,int *m) {
	int t;
	t=*n;
	*n=*m;
	*m=t;
}
int count(int n) {
    int i,count = 0; 
    int sq = sqrt(n); 
    if (sq * sq == n) 
        count++; 
    for (i=1; i<sqrt(n); i++) 
        if (n % i == 0)     
            count += 2; 
    return count; 
} 
int main() {
	int n=6,i,j;
	int a[]={104, 210, 315, 166, 441, 180};
	int c[n],cc[n];
	for(i=0;i<n;i++) 
		c[i]=cc[i]=count(a[i]);
	for(i=0;i<n;i++) {
		for(j=0;j<n-i-1;j++)
			if(cc[j]<cc[j+1])
				swap(&cc[j],&cc[j+1]);
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(cc[i]==c[j]) {
				printf("%d ",a[j]);
				break;
			}
		}
	}
	return 1;
}
