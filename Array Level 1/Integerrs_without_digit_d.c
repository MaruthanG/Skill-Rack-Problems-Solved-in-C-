#include<stdio.h>
void main()
{
	int i,n,d,a[20],flag=0,temp,rem;
	scanf("%d%d",&n,&d);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(temp=a[i];temp!=0;temp=temp/10)
		{
			rem=temp%10;
			if(rem==d)
			break;
		}
		if(temp==0)
		{
		printf("%d ",a[i]);
		flag=1;
		}
	}
	if(flag==0)
	printf("-1");
}
