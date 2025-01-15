#include<stdio.h>
/* Vol of cone */
int main()
{
	int r,h;
	float v;
	printf("\n Enter Radius and Height = ");
	scanf("%d%d",&r,&h);
	v=3.1415*r*r*h/3;
	printf("\n Volume of cone =%f",v);
}