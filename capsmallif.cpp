#include<stdio.h>
int main()
{
	char x;
	printf("Enter a character = ");
	scanf("%c",&x);
	
	if(x>=65&&x<=90)
	{
		printf("%c is Capital, ASCII value is %d",x,x);
	}
	else
	{
		if(x>=97&&x<=122)
		{
			printf("%c is Small, ASCII value is %d",x,x);
		}
		else
		{
			printf("%c is not an alphabet, ASCII value is %d",x,x);
		}
	}
	return 0;
}