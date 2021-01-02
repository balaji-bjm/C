#include<stdio.h>
typedef struct tree {
	struct tree *pre;
	int data;
	struct tree *next;
}node;
	node* head=NULL;
	node* tail=NULL;
node *createNode() {
	node *newNode;
	newNode=(node*)malloc(sizeof(node));
	printf("Enter value : \n");
	scanf("%d",&newNode->data);
	newNode->next=NULL;
	newNode->pre=NULL;
	return newNode;
}
void display() {
	node* temp;
	temp=head;
	while(temp) {
		printf("\a%d ",temp->data);
		temp=temp->next;
	}
}
void addfrist() {
	node *newNode=createNode();
	if(head==NULL) {
		head=newNode;
		tail=newNode;
		return ;
	}
	newNode->next=head;
	head->pre=newNode;
	head=newNode;
}
void addlast() {
	node *newNode=createNode();
	if(head==NULL) {
		head=newNode;
		tail=newNode;
		return ;
	}
	newNode->pre=tail;
	tail->next=newNode;
	tail=newNode;
}
int main() {
	while(1) {
	printf("\nchoose : ");
	int sh;
	printf("\n1.addfirst\n2.addlast \n");
	scanf("%d",&sh);
	switch(sh) {
		case 1: {
			addfrist();
			display();
			break;
		}
		case 2: {
			addlast();
			display();
			break;
		}
	}
}
}
