#include<stdio.h>
typedef struct tree {
	struct tree *left;
	int data;
	struct tree *right;
}node;
node* head=NULL;
node* temp=NULL;
node* tail=NULL;
int size=0;
node *createNode() {
	node* newNode;
	newNode = (node*)malloc(sizeof(node));
	if(newNode!=NULL) {
		newNode->left=NULL;
		newNode->right=NULL;
		printf("Enter data :");
		scanf("%d",&newNode->data);
		return newNode;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
	}
	else
		printf("Memory not created");
	return;
}

node* addfirst() {
	node* newNode = createNode();
	size++;
	if(head==NULL) {
		head=newNode;
		tail=newNode;
		return newNode;
	}
	newNode->right=head;
	head->left=newNode;
	head=newNode;
	return newNode;
}
void addlast() {
	node* newNode = createNode();
	size++;
	if(head==NULL) {
		head=newNode;
		tail=newNode;
		return;
	}
	newNode->left=tail;
	tail->right=newNode;
	tail=newNode;
	return;
}
void addmid() {
	int cur=1,pos;
	printf("Enter the position : ");
	scanf("%d",&pos);
	if(pos>size) {
		addlast();
		return;
	}
	node* newNode = createNode();
	node* tptr;
	if(head==NULL) {
		head=newNode;
		tail=newNode;
		size++;
		return;
	}
	tptr=head;
	while(cur!=pos-1) {
		tptr=tptr->right;
		cur++;
	}
	size++;
	newNode->left=tptr;
	newNode->right=tptr->right;
	tptr->right=newNode;
	return;
}
void deleteFirst() {
	if(head==NULL) {
		printf("\n No node there...\n");
		return;
	}
	temp=head;
	head->left=head->right;
	head=head->left;
	size--;
	return;
}
void deleteLast() {
	if(head==NULL) {
		printf("\n No node there...\n");
		return;
	}
	tail=tail->left;
	tail->right=NULL;
	size--;
	return;
}
void deleteMid() {
	int cur=1,pos;
	printf("Enter the position : ");
	scanf("%d",&pos);
	if(pos>size) {
		printf("\n total size of the node is %d...\n",size);
		return;
	}
	node* tptr;
	if(head==NULL) {
		printf("\n No node there...\n");
		return;
	}
	tptr=head;
	while(cur!=pos-1) {
		tptr=tptr->right;
		cur++;
	}
	node* temp=tptr;
	tptr->right=tptr->right->right;
	tptr->right->left=temp;
	size--;
	return;	
}
void display() {
	if(head==NULL) {
		printf("\nNo Node there\n");
		return;
	}
	else {
		temp=head;
		printf("\n Elements are...\n");
		while(temp) {
			printf("%d ",temp->data);
			temp=temp->right;
		}
	}
}
void main() {
	int sw=0,stop=1;
	char check='y';
	while(stop) {
		printf("\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ \n");
		printf("\n\a 1.add first\n 2.add last \n 3.add mid \n 4.delete first\n");
		printf(" 5.delete last \n 6.delete mid \n 7.node size \n 8.display\n");
		printf("Enter your choice : ");
		scanf("%d",&sw);
		switch(sw) {
			case 1: {
				addfirst();
				break;
			}
			case 2: {
				addlast();
				break;
			}
			case 3: {
				addmid();
				break;
			}
			case 4: {
				deleteFirst();
				break;
			}
			case 5: {
				deleteLast();
				break;
			}
			case 6: {
				deleteMid();
				break;
			}
			case 7: {
				printf("\n %d Nodes are there..",size);
				break;
			}
			case 8: {
				display();
				break;
			}
			default: {
				printf("\nchoose correct option\n");
			}
		}
		sw=NULL;
		printf("\n if continue or not [Y/N] : ");
		scanf("%s",&check);
		if(check=='n')
			stop=0;
		
	}
	printf("...... '-' ......\a\a\a\a\a\a\a\a\a\a\a");
}
