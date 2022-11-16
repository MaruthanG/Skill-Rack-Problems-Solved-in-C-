#include<stdio.h>
void main()
{
	int a[20],i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		printf("%d ",a[i]+a[i+1]);
		
	}
	
	
}
