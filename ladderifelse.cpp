#include<stdio.h>
int main()
{
	int n;
	printf("\n Enter ASCII value = ");
	scanf("%d",&n);
	if(n>=48&&n<=58)
		printf("\n %c is a numeric character",n);
	else if(n>=65&&n<=90)
		printf("\n %c is an uppercase character",n);
	else if(n>=97&&n<=122)
		printf("\n %c is an lowercase character",n);
	else
		printf("\n %c is a symbol",n);
}