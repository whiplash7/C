#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 numbers =");
	scanf("%d%d",&a,&b);
	
	if(a<b)
	{
		for(;a<=b;a++)
		printf("\n %d",a);
	}
	else
		{
			for(;a>=b;a--)
			printf("\n %d",a);
		}
}