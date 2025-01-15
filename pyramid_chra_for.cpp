#include<stdio.h>
/*pyramid*/
int main()
{
	int i,n,l,m,j;
	char a;
	printf("\n Enter number of rows = ");
	scanf("%d",&n);
	printf("\n Enter character = ");
	scanf("%d",&j);
	for(i=0;i<n;i++)
	{
		for(l=i;l>=0;l--)
		{
			printf("%5d",j);
			j++;
		}
		printf("\n");
	}
	
	return 0;
}