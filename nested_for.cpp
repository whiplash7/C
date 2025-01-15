#include<stdio.h>
/*nested for*/
int main()
{
	int i,a;
	for(i=0;i<=7;i++)
	{
		for(a=i;a<=7;a++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}