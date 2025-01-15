#include<stdio.h>
int main()
{
	int n,a,b;
	printf("\n Enter range and n = ");
	scanf("%d%d%d",&a,&b,&n);
	
	if(a<b)
	{
		for(;b%n!=0;b=b-1)
		{
			
		}
		for(;b>=a;b=b-n)
		{
			printf("\n%d",b);
		}
	}
}