#include<stdio.h> 
int main() {
	int n,check=0;
	scanf("%d",&n);
	int a[(n*2)-1][(n*2)-1];
	int arr,i,j,min=1,cur=0;
	a[n-1][n-1]=1;
	for(arr=n;arr>1;arr--) { 
		check = (n*2)-min++;
		for(i=check-1;i>=cur;i--) {
			for(j=check-1;j>=0;j--) {
				if(j==check-1 || j==cur)
					a[i][j]=arr;
				else if( (j<check-1 && j>cur) && (i==check-1 || i==cur) )
					a[i][j]=arr;
			}
		}
		cur++;
	}
	for(i=0;i<(n*2)-1;i++) {
		for(j=0;j<(n*2)-1;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
