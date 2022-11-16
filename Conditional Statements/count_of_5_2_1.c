#include<stdio.h>
void main()
{
	int n,one,two,five;
	scanf("%d",&n);
	five=n/5;
	two=(n%5)/2;
	one=((n%5)%2)/1;
	if(five!=0)
	{
		printf("Count of five :%d",five);
	}
	if(two!=0)
	{
		printf("\nCount of two :%d",two);
	}
	if(one!=0)
	{
		printf("\nCount of one :%d",one);
	}
}
