#include<stdio.h>
/*  */
int main()
{
	int w,x,y,z;
	scanf("%d%d",&w,&y);
	x=w|y;
	z=w&y;
	printf("\n%d",x);
	printf("\n%d",z);
}