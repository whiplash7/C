#include<stdio.h>
/*sum of all even numbers*/
int main()
{
	int sum=0,a,b;
	printf("\n Enter range a to b = ");
	scanf("%d%d",&a,&b);
	
	for(;a>=b;a++)
		{
			if(a%2==0)
			{
				sum=sum+a;
			}
		}
	printf("%d",sum);

	return 0;
}