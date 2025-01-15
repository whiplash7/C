#include<stdio.h>
/* Resultwa */
int main()
{
	int math,phy,chem,t;
	float p;
	printf("\n Enter your score =");
	scanf("%d%d%d",&math,&phy,&chem);
	(math<35||phy<35||chem<35)?printf("\n Failed"):printf("\n Percentage = %f",p=(math+phy+chem)/3.0);
	t=math+phy+chem;
	(p>=35)?printf("\n Total = %d",t):printf("");
	(p>=75)?printf("\n A grade"):(p>=60)?printf("\n B grade"):(p>=45)?printf("\n C grade"):(p>=35)?printf("\n D grade"):printf("");
	
	return 0;
	
	
}