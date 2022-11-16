#include<stdio.h>
void main()
{
	int i,a[20],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		printf("%d ",a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		if(a[i]%2==1)
		printf("%d ",a[i]);
	}
}
