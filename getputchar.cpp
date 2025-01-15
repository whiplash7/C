#include<stdio.h>
/*  */
int main()
{
	int math,phy,chem;
	printf("\n Enter your score =");
	scanf("%d%d%d",&math,&phy,&chem);
	(math<35,phy<35,chem<35)?printf("\n Failed"):printf("\n Percentage = %f",(math+phy+chem)/3.0);
	
	
}