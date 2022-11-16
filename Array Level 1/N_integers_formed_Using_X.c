#include<stdio.h>
void main()
{
	int x,i,temp,rem,n,a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		for(temp=x;temp!=0;temp=temp/10)
		{
			rem=temp%10;
			if(rem==a[i])
			break;
		}
		if(temp==0)
		break;
		
	}
	if(i==n)
	printf("YES");
	else
	printf("no");
}
