#include<stdio.h>
void main()
{
	int a,b,c,d,x,amount=0;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
	amount=a+2*b+5*c+10*d;
	if(amount==x)
	{
		printf("Paid");
	}
	else if(amount>x)
	{
		printf("Paid %d",amount-x);
	}
	else
	{
		printf("Not Paid %d",amount);
	}
}
