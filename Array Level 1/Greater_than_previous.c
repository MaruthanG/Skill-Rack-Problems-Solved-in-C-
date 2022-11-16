#include<stdio.h>
void main()
{
	int i,n,max,a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d ",a[0]);
	for(i=1;i<n;i++)
	{
		if(a[i-1]<a[i])
		printf("%d ",a[i]);
	}
}
