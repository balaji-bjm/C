#include<stdio.h>
int main()
{
	int h,spin,speed;//50 60 100
	scanf("%d%d%d",&h,&spin,&speed); // 1,2,3  10 // 1,2  9 //2,3 8 // 1,3 7// any 1 6 // nothing 5
	int c;
	c=((h>50)&&(spin>60)&&(speed>100))?printf("10"):((h>50)&&(spin>60)?printf("9"):((spin>60)&&(speed>100)?printf("8"):((h>50)&&(speed>100)?
		printf("7"):((h>50)||(spin>60)||(speed>100))?printf("6"):printf("5"))));
	return 1;
}
