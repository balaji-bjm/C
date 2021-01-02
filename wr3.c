#include<stdio.h>
int main()
{
	int n,rem;
	scanf("%d",&n);
	rem=n%8;
	int c=(rem==1)?printf("%dLB",n+3):((rem==2)?printf("%dMB",n+3):((rem==3)?printf("%dUB",n+3):((rem==4)?printf("%dLB",n-3):
	((rem==5)?printf("%dMB",n-3):((rem==6)?printf("%dUB",n-3):	((rem==7)?printf("%dSU",n+1):printf("%dSL",n-1)))))));
	return 1;
}
