#include<stdio.h>
void main()
{
	int x,y,price,discount;
	scanf("%d%d",&x,&y);
	price=x*y;
	if(x>=2&&x<=4)
	{
		discount=(price*10)/100;
	}
	else if(x==5)
	{
		discount=(price*20)/100;
	}
	else if(x>5)
	{
		discount=(price*50)/100;
	}
	else
	{
		discount=0;
	}
		printf("total amount is %d",price-discount);
}
