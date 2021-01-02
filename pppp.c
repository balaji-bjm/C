#include<stdio.h>
int main()
{
	int ir,fr,r,cost,ctemp;
	scanf("%d%d",&ir,&fr);
	if(ir>fr)
	{
		printf("Invalid input");
	}
	else
	{
		r=abs(ir-fr);
		int temp=r,c2=0,c5=0;
		if(r<=100)
		{
			cost+=0;
		}
		else if(r<=200)
		{	
			r=abs(r-100);
			cost+=20+(r*2);
		}
		else if(r<=500)
		{
			r=abs(r-100);
			temp=r;
			c2=abs(r-100);
			c2=(temp-c2);
			r=abs(r-100);
			cost+=30+(c2*2)+(r*3);
		}
		else
		{
			r=abs(r-100);
			temp=r;
			c2=abs(r-100);
			c2=(temp-c2);
			r=abs(r-100);
			temp=r;
			c5=abs(r-300);
			c5=temp-c5;
			r=abs(r-300);
			cost+=50+(c2*3.50)+(c5*4.60)+(r*6.60);
		}
	}
	printf("%d",cost);
	return 0;
}
