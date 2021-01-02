#include<stdio.h>
void swap(int *n,int *m) {
	int t;
	t=*n;
	*n=*m;
	*m=t;
	return;
}
void bubble(int a[],int n) {
	int i,j;
	for(i=0;i<n-1;i++) {
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
				swap(&a[j],&a[j+1]);
	}
	return;
}
void insertion(int a[],int n) {
	int i,j;
	int key;
	for(i=1;i<n;i++) {
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key) {
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	return;
}
void selection(int a[],int n) {
	int m,i,j;
	for(i=0;i<n;i++) {
		m=i;
		for(j=i+1;j<n;j++) {
			if(a[j]<a[m])
				m=j;
		}
		swap(&a[m],&a[i]);
	}
	return;
}
void merger(int a[],int s,int m,int e) {
	int ls=m-s+1;
	int rs=e-m;
	int l[ls],r[rs];
	int i,j,k;
	k=s;
	for(i=0;i<ls;i++)
		l[i]=a[i+s];
	for(i=0;i<rs;i++)
		r[i]=a[m+i+1];
	i=j=0;
	while(i<ls && j<rs) {
		if(l[i]<r[j]) {
			a[k++]=l[i++];
		}
		else
			a[k++]=r[j++];
	}
	while(i<ls) a[k++]=l[i++];
	while(j<rs) a[k++]=r[j++];
	return;
}
void merge(int a[],int s,int e) {
	int m;
	if(s<e) {
		m=s+(e-s)/2;
		merge(a,s,m);
		merge(a,m+1,e);
		merger(a,s,m,e);
	}
	return;
}
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]);
	int k;
	while(1) {
		printf("\n Enter your choice : ");
		scanf("%d",&k);
		switch(k) {
			case 1: {
				bubble(a,n);
				break;
			}
			case 2: {
				insertion(a,n);
				break;
			}
			case 3: {
				selection(a,n);
				break;
			}
			case 4: {
				merge(a,0,n-1);
				break;
			}
		}
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
	}
	return 1;
}
