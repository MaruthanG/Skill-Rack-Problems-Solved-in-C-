#include<stdio.h>
void main()
{
	int x,y,z,discount;
	scanf("%d%d%d",&x,&y,&z);
	if(x==y&&y==z&&z==x)
	{
		discount=0;
	}
	else if (x==y)
	{
		discount=(x*2*10)/100;
	}
	else if(y==z)
	{
		discount=(y*2*10)/100;
	}
	else if(z==x)
	{
		discount=(z*2*10)/100;
	}
	else 
	{
	discount=0;
	}
	printf("total amount is %d",x+y+z-discount);
}
