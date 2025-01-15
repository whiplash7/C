#include<stdio.h>
/* Palindromic */
int main()
{
	int n,r,n1,n2,n3;
	printf("\n Enter a 3 digit number = ");
	scanf("%d",&n);
	n=r;
	if(n>=100&&n<=999)
	{
		printf("\n Given number is Invalid");
	}
	else
	{
		n1=n%10;
		n/=10;
		n2=n%10;
		n/=10;
		n3=n%10;
		n/=10;
		
		r=n1*100+n2*10+n3*1;
		printf("%d",r);
	
	}

	return 0;
}