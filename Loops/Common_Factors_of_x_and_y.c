#include<stdio.h>
void main()
{
	int i,min,x,y;
	scanf("%d%d",&x,&y);
	min=x;
	if(x>y)
	{
	min=y;
	}
	for(i=1;i<=min;i++)
	{
		if(x%i==0&&y%i==0)
		{
			printf("%d ",i);
		}
	}
}
