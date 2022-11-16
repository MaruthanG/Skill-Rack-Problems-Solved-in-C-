#include<stdio.h>
void main()
{
	int i,j,n,count=0;
	scanf("%d",&n);
	for(i=n+1;;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		break;
	}
	printf("%d",i);
}
