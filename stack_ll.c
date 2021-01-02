#include <stdio.h>
typedef struct link {
    int data;
    struct link *next;
}node;
node *head=NULL;
node *newNode=NULL;
node* createNode() {
    node* ptr;
    ptr= (node*)malloc(sizeof(node));
    if(ptr!=NULL) {
        printf("Enter element : ");
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        return ptr;
    }
}
node *add(node* newNode) {
	newNode=createNode();
	if(head==NULL) {
   		head=newNode;
    	return;
	}
	newNode->next=head;
	head=newNode;
	return;
}
int main()
{
    
    int stop=1,sw;
    while(stop) {
        printf("Enter your choice \n1.push\n2.pop\n3.display\n4.STOP\n");
		//printf
		scanf("%d",&sw);
        switch(sw) {
            case 1:
            	{
            		node *temp=add(newNode);
                	//printf("%d\n",temp->data);
                	break;
				}
            case 2:
            	{
            		head=head->next;
            		break;
				}
            case 3:
            	{
            		node* traverse=head;
            		while(traverse) {
            			printf("%d ",traverse->data);
            			traverse=traverse->next;
					}
					printf("\n");
					break;
				}
            case 4:
                stop=0;
                break;
            default:
                printf("Choose correct one\n");
        }
    }
    return 0;
}

