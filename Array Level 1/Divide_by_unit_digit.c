#include<stdio.h>
void main()
{
	int i,n,a[20],unit;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		unit=a[i]%10;
		if(unit==0)
		{
		unit=1;
		}
		printf("%.2f ",(float)a[i]/unit);
	}
	
}
