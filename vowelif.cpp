#include<stdio.h>
int main()
{
	char c;
	printf("\n Enter a character = ");
	c=getchar();
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf("\n Vowel");
	}
	else
	{
		printf("\n Consonent");
	}
	return 0;
}