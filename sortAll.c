#include<stdio.h> 
void swap(int *num_1,int *num_2) {
	int t;
	t=*num_1;
	*num_1=*num_2;
	*num_2=t;
}
void boubleSort(int arr[],int size) {
	int out_itr,in_itr;
	for( out_itr=0; out_itr<size; out_itr++ ) 
		for( in_itr=0; in_itr<size-out_itr-1; in_itr++ ) 
			if( arr[in_itr] > arr[in_itr+1] )
				swap(&arr[in_itr],&arr[in_itr+1]);
}
void insertionSort(int arr[],int size) {
	int key;
	int in_itr,out_itr;
	for(out_itr=1;out_itr<size;out_itr++) {
		key=arr[out_itr];
		in_itr=out_itr-1;
		while(in_itr>=0 && arr[in_itr]<key) {
			arr[in_itr+1]=arr[in_itr];
			in_itr--;
		}
		arr[in_itr+1]=key;
	}
	display(arr,size);
}
void selectionSort(int arr[],int size) {
	int min_idx,out_itr,in_itr;
	for( out_itr=0;out_itr<size-1;out_itr++) {
		min_idx=out_itr;
		for(in_itr=out_itr+1;in_itr<size;in_itr++) {
			if(arr[in_itr]<arr[min_idx])
				min_idx=in_itr;
		}
		swap(&arr[min_idx],&arr[out_itr]);
	}
	display(arr,size);
}
void display(int arr[],int size) {
	int itr;
	for(itr=0;itr<size;itr++) 
		printf("%d ",arr[itr]);
	printf("\n");
}
void main() {
	int arr[]={1,56,67,8,5,3,2,67,84,6,3};
	int size=(sizeof(arr)/sizeof(arr[0]));
	boubleSort(arr,size);
	display(arr,size);
	insertionSort(arr,size);
	selectionSort(arr,size);
}
