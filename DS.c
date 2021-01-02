#include<stdio.h>
void swap(int *i,int *j) {
	int t=*i;
	*i=*j;
	*j=t;
}
void in(int arr[],int size) {
	int i,j,key;
	for(i=1;i<size;i++) {
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key) {
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
void sel(int arr[],int size) {
	int i,j,mid;
	for(i=0;i<size;i++) {
		mid=i;
		for(j=i+1;j<size;j++) {
			if(arr[j]<arr[mid])
				mid=j;
		}
		swap(&arr[mid],&arr[i]);
	}
}
void merger(int arr[],int start,int mid,int end) {
	int ls,rs;
	ls=mid-start+1;
	rs=end-mid;
	int la[ls],ra[rs];
	int i,j,k;
	for(i=0;i<ls;i++) 
		la[i]=arr[i+start];
	for(j=0;j<rs;j++)
		ra[j]=arr[mid+1+j];
	i=j=0;
	i=0;
	//while(i<rs) printf(" %d ",ra[i++]);
	k=start;
	while(i<ls && j<rs) {
		if(la[i]<ra[j])
			arr[k++]=la[i++];
		else
			arr[k++]=ra[j++];
	}
	while(i<ls) arr[k++]=la[i++];
	while(j<rs) arr[k++]=ra[j++];
	//printf("~%d~",mid);
	return;
}
void mergeSort(int arr[],int start,int end) {
	if(start<end) {
		int mid;
		mid=start+(end-start)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merger(arr,start,mid,end);
	}
	return;
}
int main() {
	int a[]={6,3,4,5,7,8,95};
	int size = sizeof(a)/sizeof(a[0]);
	//sel(a,size);
	int i=0;
	//merger(a,0,size/2+1,size);
	//printf("%d ",size);
	mergeSort(a,0,size-1);
	for(i=0;i<size;i++) 
		printf("%d ",a[i]);
	return 0;
}
