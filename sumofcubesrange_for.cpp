#include<stdio.h>
/*sum of cubes of all no. in range*/
int main()
{
	int a,b,sum=0,i;
	printf("\n Enter range a to b = ");
	scanf("%d%d",&a,&b);
	for(;a<=b;a++)
	{
		sum=sum+a*a*a;
	}
	printf("\n %d",sum);
	
	return 0;
}