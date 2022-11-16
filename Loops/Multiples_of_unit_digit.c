#include<stdio.h>
void main()
{
	int i,n,unitdigit;
	scanf("%d",&n);
	unitdigit=n%10;
	for(i=unitdigit;i<=n;i=i+unitdigit)
	{
		printf("%d ",i);
	}
}
