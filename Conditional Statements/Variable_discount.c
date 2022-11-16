#include<stdio.h>
void main()
{
	int p;
	float price;
	scanf("%d",&p);
	if(p<=1000)
	{
		price=(p*10)/100;
	}
	else
	{
		price=100+((p-1000)*5)/100;
	}
	printf("%.2f",price);
}
