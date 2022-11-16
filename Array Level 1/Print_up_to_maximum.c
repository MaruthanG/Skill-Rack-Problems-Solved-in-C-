#include<stdio.h>
void main()
{
	int i,j,n,a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[0]<a[i])
		{
		j=i;
		break;
		}
	}
	for(i=0;i<=j;i++)
	{
		printf("%d ",a[i]);
	}
}
