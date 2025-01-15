#include<stdio.h>
/* Float, Double, Exponential */
int main()
{
	float a=123.987654,b=321.456789E5,c=123456.789E-5,d=0.000000001234;
	double x=123.987654,y=321.456789E5,z=654321.987E-5,w=0.000000001234;

	printf("\n Float a = %f",a);
	printf("\n Exponential b = %e",b);
	printf("\n Exponential c = %e",c);
	printf("\n Flaot big = %e",d);
	
	printf("\n Double x = %f",x);
	printf("\n Exponential y = %e",y);
	printf("\n Exponential z = %e",z);
	printf("\n Double big = %e",w);
	
}