#include<stdio.h>
#include<malloc.h>
typedef struct bound
{
    int data;
    struct bound *next;
}node;
node* head=NULL;
node* tail=NULL;
void createNode(int n) {
    node *newNode;
    int i;
    for(i=0;i<n;i++) {
	    newNode=(node*)malloc(sizeof(node));
	    if(newNode==NULL) 
	        continue;
	    scanf("%d",&newNode->data);
	    newNode->next=NULL;
	    if(head==NULL) {
	        head=newNode;
	        tail=newNode;
	        continue;
	    }
	    tail->next=newNode;
	    tail=newNode;
	}
    return;
}
void sort(int s,int n) {
    node* h=NULL;
    node* head2;
    int i,j;
    for(i=0;i<n;i++) {
        if(i<s-1) {
            head2=head;
            for(j=0;j<s-1;j++) {
                if(head2->data > head2->next->data) {
                    int t; 
                    t=head2->data;
                    head2->data=head2->next->data;
                    head2->next->data=t;
                }
                head2=head2->next;
            }    
            h=head2->next;
        }
        else {
            head2=h;
            while(head2->next) {
                if(head2->data < head2->next->data) {
                    int  t=head2->data;
                    head2->data=head2->next->data;
                    head2->next->data=t;
                }
                head2=head2->next;
            }
        }
    }
}
void print(int n) {
	int i;
    for(i=0;i<n;i++) {
        printf("%d ",head->data);
        head=head->next;
    }
}
int main() {
    int n,s,i;
    scanf("%d%d",&n,&s);
	createNode(n);
    sort(s,n);
    print(n);
}
