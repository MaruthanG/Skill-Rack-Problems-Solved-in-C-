#include<stdio.h>
void main()
{
	int j,i,n,a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=n-1;i>=0;i--)
	{
		if(a[i]%2!=0)
		{
		j=i;
		break;
		}		
	}
	for(i=j;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}
