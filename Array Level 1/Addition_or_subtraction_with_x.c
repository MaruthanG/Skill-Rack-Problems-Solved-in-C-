#include<stdio.h>
void main()
{
	int i,n,x,a[20];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]+x);
			
		}
		else
		{
			printf("%d ",a[i]-x);
		}
		
	}
}
