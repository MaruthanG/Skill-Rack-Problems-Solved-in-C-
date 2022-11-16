#include<stdio.h>
void main()
{
	int i,n,a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		printf("%d ",a[i]);
	}
}
