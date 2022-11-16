#include<stdio.h>
void main()
{
	int i,n,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
		if(count==2||n%2==0)
		{
			printf("Valid");
		}
		else
		{
			printf("Invalid");
		}
}

