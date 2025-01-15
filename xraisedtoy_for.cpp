#include<stdio.h>
/*x^y*/
int main()
{
	int x,y,sum=1;
	printf("\n Enter x raised to y = ");
	scanf("%d%d",&x,&y);
	
	for(;y>0;y--)
	{
		sum=sum*x;
	}
	printf("%d",sum);
}