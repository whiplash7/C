#include<stdio.h>
/*perfect number*/
int main()
{
	int n,i,sum=0;
	printf("\n Enter a number = ");
	scanf("%d",&n);

	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("\n %d is a perfect number",n);
	}
	else
	{
		printf("\n %d is not a perfect number",n);
	}
	
	return 0;
}