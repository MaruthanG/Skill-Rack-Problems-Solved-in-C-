#include<stdio.h>
void main()
{
	int i,j,n1,n2,unitdigit,tengthdigit,rem,temp,flag;
	scanf("%d%d",&n1,&n2);
	unitdigit=n2%10; 
	tengthdigit=(n2/10)%10;
	for(temp=n1;temp!=0;temp=temp/10)
	{
		rem=temp%10;
			if(rem==unitdigit||rem==tengthdigit)
			{
				break;
			}
	}
	if(temp==0)
	{
		printf("InValid");
	}
	else
	{
		printf("valid");
	}
}
