#include<stdio.h>
void main()
{
	int flag=0,i,n,a[20];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]%10==0&&(a[i]/10)%10==1)
		{
		printf("%d ",a[i]);
		flag=1;
		}
	
	}
	if(flag==0)
	{
		printf("-1");
	}
}

