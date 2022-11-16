#include<stdio.h>
void main()
{
	int i,j,n,k=1,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<=i;j++)
		{
			sum=sum+k;
			k++;
		}
		printf("%d ",sum);
	}
}
