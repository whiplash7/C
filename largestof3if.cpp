#include<stdio.h>
/* Largest of 3 no. */
int main()
{
	int a,b,c;
	printf("\n Enter 3 numbers = ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("\n %d is the largest number",a);
	}
	else
	{
		if(b>a&&b>c)
		{
			printf("\n %d is the largest number",b);
		}
		else
		{
			printf("\n %d is the largest number",c);
		}
	}
	
	return 0;
}