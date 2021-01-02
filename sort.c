#include<stdio.h>
typedef struct stack {
	int data;
	struct stack *next;
}node;
node* head=NULL;
node* temp=NULL;
node* createNode() {
	node* newNode;
	newNode = (node*)malloc(sizeof(node));
	if(newNode==NULL)
		return;
	printf("\n Enter data :");
	scanf("%d",&newNode->data);
	newNode->next=NULL;
	return newNode;
}
void push(int a[]) {
	node* newNode = createNode();
	if(head==NULL) {
		head = newNode;
		printf("\n",display());
		return;
	}
	newNode->next=head;
	head=newNode;
	printf("\n",display());
	return;
}
void pop(int a[]) {
	if(head==NULL) {
		printf("NO node there..");
		return;
	}
	temp=head;
	head=head->next;
	free(temp);
	printf("\n",display());
	return;
}
void top() {
	if(head==NULL) {
		printf("NO node there..");
		return;
	}
	printf("\n %d",head->data);
	return;
}
void ascendingOrder() {
	if(head==NULL) {
		printf("NO node there..");
		return;
	}
	int i,j;
	node* row=head;
	node* change;
	temp=head;
	while(row) {
		node* col=head;
		while(col->next) {
			if(col->data>col->next->data) {
				change=col->data;
				col->data=col->next->data;
				col->next->data=change;
			}
			col=col->next;
		}
		row=row->next;
	}
	display();
	return;
}
void descendingOrder() { 
	if(head==NULL) {
		printf("NO node there..");
		return;
	}
	int i,j,k=1;
	node* row=head;
	node* change;
	temp=head;
	while(row) {
		node* col=head;
		while(col->next) {
			if(col->data<col->next->data) {
				change=col->data;
				col->data=col->next->data;
				col->next->data=change;
			}
			col=col->next;//printf(" %d ",k++);
		}
		row=row->next;
	}
	display();
	return;
}
void display() {
	temp=head;
	printf("\n");
	while(temp) {
		printf(" %d",temp->data);
		temp=temp->next;
	}
	return;
}
int main() {
	int stop=1,sw;
	int a[]={5,1,3,4,2};
	while(stop) {
		printf("\n 1.push \n 2.pop \n 3.top \n 4.ascending order \n 5.descending order");
		printf("\n Choose your operation : ");
		scanf("%d",&sw);
		switch(sw) {
			case 1: {
				push(a);
				break;
			}
			case 2: {
				pop(a);
				break;
			}
			case 3: {
				top();
				break;
			}
			case 4: {
				ascendingOrder();
				break;
			}
			case 5: {
				descendingOrder();
				break;
			}
		}
	}
	return 0;
}
