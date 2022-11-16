#include<stdio.h>
void main()
{
	int i,n,a[20],flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if((a[i]*2)%10!=2)
		{
		printf("%d ",a[i]*2);
		flag=1;
		}
	}
	if(flag==0)
	printf("-1");
}
