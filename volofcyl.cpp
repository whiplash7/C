#include<stdio.h>
/* Vol of cylinder */
int main()
{
	int r,h;
	float v;
	printf("\n Enter Radius and Height = ");
	scanf("%d%d",&r,&h);
	v=3.1415*r*r*h;
	printf("\n Volume of a cylinder = %.2f",v);
	
	return 0;
}