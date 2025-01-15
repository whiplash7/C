#include<stdio.h>
/* Sum of digits */
int main()
{
	int n,d,sum=0;
	printf("\n Enter a 3 digit number = ");
	scanf("%d",&n);
	d=n%10;
	n=n/10;
	sum=sum+d;
	
	d=n%10;
	n=n/10;
	sum=sum+d;
	
	d=n%10;
	n=n/10;
	sum=sum+d;
	
	printf("\n Sum = %d",sum);
	
}