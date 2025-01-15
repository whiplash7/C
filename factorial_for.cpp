#include<stdio.h>
/*factorial of a no.*/
int main()
{
	int a,sum=1;
	printf("\n Enter a number = ");
	scanf("%d",&a);
	for(;a>0;a--)
	{
		sum=sum*a;
	}
	printf("%d",sum);
}