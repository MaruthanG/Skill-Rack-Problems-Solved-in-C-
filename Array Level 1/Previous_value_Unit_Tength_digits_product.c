#include<stdio.h>
void main()
{
	int unit,tength,i,n,a[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		
		unit=a[i]%10;
		tength=(a[i]/10)%10;
		
		printf("%d ",unit*tength);
	}
}
