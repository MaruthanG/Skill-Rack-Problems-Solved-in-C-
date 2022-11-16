#include<stdio.h>
void main()
{
	int temp,i,n,x,rem,sum=0;
	scanf("%d%d",&n,&x);
	for(temp=n;temp!=0;temp=temp/10)
	{
		rem=temp%10;
		sum+=rem;
	}
	printf("%d",sum*x);
}
