#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Enter 2 numbers = ");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		if(a%2==0)
		{
			for(;a>=b;a=a-2)
				printf("\n %d",a);
		}
	}
	else
	{
		if(b%2==0)
		{
			for(;b>=a;b=b-2)
				printf("\n %d",b);
		}
	}
	return 0;
}