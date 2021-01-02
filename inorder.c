#include<stdio.h>
#include<string.h>
typedef struct n {
	char data[10];
	struct n* next;
}node;
node* top=NULL;
node* createNode(char s) {
	node *newNode;//printf("fjgb");
	newNode = (node*)malloc(sizeof(node));
	newNode->data[0]=s;
	//strcat(newNode->data,"iuugj");                      
	return newNode;
}
void inorder(char s[],int len) {
	int i;
	node* newNode;
	for(i=0;i<len;i++) {//printf("%c",s[i]);
		if( 'A'<=s[i] && 'Z'>=s[i] || 'a'<=s[i] && 'z'>=s[i]) {
			newNode = createNode(s[i]);
			if(top==NULL) {
				top=newNode;
				continue;
			}
			newNode->next=top;
			top=newNode;	
		}
		else {
			char con[20]="";
			//strcat(top->next->data,s[i]);
			//strcat(top->next->data,top->data);
			//top=top->next;
			//strcpy(con,top->data);
			printf("%c",top->data[0]);break;
			
		}
	}
	//printf("%c",newNode->data[0]);
}
int main() {
	char s[50]="ABC*DEF^/G*-H*+";
	int len = strlen(s);
	inorder(s,len);
	return 0;
}
