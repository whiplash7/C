#include<stdio.h>
/* 6 sub grade */
int main()
{
	int s1,s2,s3,s4,s5,s6,t;
	float p;
	printf("\n Enter marks in 6 subjects = ");
	scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
	if(s1>100||s1<0||s2>100||s2<0||s3>100||s3<0||s4>100||s4<0||s5>100||s5<0||s6>100||s6<0)
	{
		printf("\n Marks Invalid");
	}
	else
	{
		if(s1<35||s2<35||s3<35||s4<35||s5<35||s6<35)
		{
			printf("\n Failed");
		}
		else
		{
			t=s1+s2+s3+s4+s5+s6;
			p=t/6.0;
			printf("\n Total = %d",t);
			printf("\n Percentage = %.2f",p);
			if(p>=75)
			{
				printf("\n A grade");
			}
			else
			{
				if(p>=60)
				{
					printf("\n B grade");
				}
				else
				{
					if(p>=50)
					{
						printf("\n C grade");
					}
					else
					{
						printf("\n D grade");
					}
				}
			}
		}
	}
	
	return 0;
}