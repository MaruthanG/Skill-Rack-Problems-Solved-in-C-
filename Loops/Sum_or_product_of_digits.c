#include<stdio.h>
void main()
{
	int i,n,temp,sum=0,product=1,rem;
	scanf("%d",&n);
	if(n%2==0)
	{
		for(temp=n;temp!=0;temp=temp/10)
		{	
			rem=temp%10;
			sum+=rem;
		}
			printf("%d",sum);
	
	}
	else
	{
		for(temp=n;temp!=0;temp=temp/10)
		{
			rem=temp%10;
			product*=rem;
		}
			printf("%d",product);
	}
}
