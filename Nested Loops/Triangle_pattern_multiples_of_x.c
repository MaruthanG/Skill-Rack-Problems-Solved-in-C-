#include<stdio.h>
void main()
{
	int i,j,n,x,k=1;
	scanf("%d%d",&n,&x);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		
			if(k%x==0)
			{
				printf("*");
			}
			else
			{
				printf("%d",k);
			}
			k++;
		}
			printf("\n");
			
	}
}
