#include<stdio.h>
void main()
{
	int i,x,n,a[10],flag=0;
	scanf("%d%d",&n,&x);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if((a[i]*a[i]+10)%10!=5 && (a[i]*a[i]+10)%10!=6)
		{
			printf("%d ",a[i]*a[i]+10);
			flag=1;
		}
		
	}
	if(flag==0)
	printf("-1");
}
