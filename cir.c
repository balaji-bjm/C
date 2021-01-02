#include<stdio.h>
#include<malloc.h>
typedef struct circular_node
{
    int data;
    struct circular_node* next;
}node;
node *head=NULL;
node *cur=NULL;
node* tail=NULL;
node *p;
int size=0;
int i,j;
int createNode() {
    int n;
    node* newNode;
    newNode = (node*)malloc(sizeof(node));
    if(newNode==NULL)
        return 1;
    scanf("%d",&n);
    if(n==-1)
        return 0;
    size++;
    newNode->data=n;
    newNode->next=NULL;
    if(head==NULL) {
        head=newNode;
        tail=newNode;
        return 1;
    }
    newNode->next=head;
    head=newNode;
    return 1;
}
void ascending() {
    node *hd;
    cur=head;
    for(i=0;i<size;i++) {
        hd=cur;
        for(j=0;j<size-1;j++) {
            int t;
            if(hd->data>hd->next->data) {
                t=hd->data;
                hd->data=hd->next->data;
                hd->next->data=t;
            }
            hd=hd->next;
        }
        cur=cur->next;
    }
}
void print() {
    for(i=0;i<size;i++) {
        printf("%d ",head->data);
        head=head->next;
    }
    //printf("%d",head->next->next->data);
}
void main() {
    int n=1;
    while(n) 
        n=createNode();
    tail->next=head;
    ascending();
    print();
}
