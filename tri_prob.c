#include<stdio.h>
int isTriangle(int a,int b,int c) {
	if( a+b>c && b+c>a && a+c>b) {
		if(a==b && b==c)
			return 1;
		else if(a==b || b==c || c==a)
			return 2;
		return 3;
	}
}
int main() {
	int p1,p2,p3,flag=0,n=1;
	while(n) {
		printf("\n Enter the Points of Triangle :\n");
		scanf("%d%d%d",&p1,&p2,&p3);
		if((p1>=0 && p1<=10) && (p2>=0 && p2<=10) && (p3>=0 && p3<=10)) 
			flag=isTriangle(p1,p2,p3);
		else {
			printf("\n Invalid input");	
		}
		switch(flag) {
			case 1: {
				printf("\n Equilatral Triangle");
				break;
			}
			case 2: {
				printf("\n Isosceles Triangle");
				break;
			}
			case 3: {
				printf("\n Scalene Triangle");
				break;
			}
			default :{
				printf("\n Not a Triangle");
				break;
			}
		}
		printf("\n Continue press 1 & exit 0)");
		scanf("%d",&n);	
	}
	return 1;
}
