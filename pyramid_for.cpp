#include<stdio.h>
/*pyramid*/
int main()
{
	int i,j,n,l,m;
	printf("\n Enter number of rows = ");
	scanf("%d",&n);
	printf("\n Enter number = ");
	scanf("%d",&j);
	//m=j;112123
	for(i=0;i<n;i++)
	{
		//j=m;123456
		for(l=i;l>=0;l--)
		{
			printf("%5d",j);
			j++;
		}
		printf("\n");
	}
	
	return 0;
}