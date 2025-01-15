#include<stdio.h>
int main()
{
	char name1[15],name2[15],name3[15],name4[15],name5[15];
	int age1,age2,age3,age4,age5,o;
	float wt1,wt2,wt3,wt4,wt5,avage,avwt;
	
	printf("\n Enter Name, Age, Weight of 1st students = ");
	scanf("%s%d%f",&name1,&age1,&wt1);
	printf("\n Enter Name, Age, Weight of 2nd students = ");
	scanf("%s%d%f",&name2,&age2,&wt2);
	printf("\n Enter Name, Age, Weight of 3rd students = ");
	scanf("%s%d%f",&name3,&age3,&wt3);
	printf("\n Enter Name, Age, Weight of 4th students = ");
	scanf("%s%d%f",&name4,&age4,&wt4);
	printf("\n Enter Name, Age, Weight of 5th students = ");
	scanf("%s%d%f",&name5,&age5,&wt5);
	
	printf("\n 1:Display details of all students in row column format.");
	printf("\n 2:Display details of student with highest.");
	printf("\n 3:Display the youngest student.");
	printf("\n 4:Display Average age and Weight of all students.");
	
	printf("\n Choose the option.");
	scanf("%d",&o);
	
	switch(o)
	{
		case 1:
			{
				printf("\n Name \t Age \t Weight");
				printf("\n%25s%20d%20.2f",name1,age1,wt1);
				printf("\n%25s%20d%20.2f",name2,age2,wt2);
				printf("\n%25s%20d%20.2f",name3,age3,wt3);
				printf("\n%25s%20d%20.2f",name4,age4,wt4);
				printf("\n%25s%20d%20.2f",name5,age5,wt5);
			}
		break;
		
		case 2:
			{
				if(wt1>w2&&wt1>w3&&wt1>w4&&wt1>w5)
					printf("\n%25s%20d%20.2f",name1,age1,wt1);
				else
					{
						if(wt2>w1&&wt2>w3&&wt2>w4&&wt2>w5)
							printf("\n%25s%20d%20.2f",name2,age2,wt2);
						else
							{
								if(wt3>w1&&wt3>w2&&wt3>w4&&wt3>w5)
									printf("\n%25s%20d%20.2f",name3,age3,wt3);
								else
									{
										if(wt4>w1&&wt4>w2&&wt4>w3&&wt4>w5)
											printf("\n%25s%20d%20.2f",name4,age4,wt4);
										else
											printf("\n%25s%20d%20.2f",name5,age5,wt5);
									}
							}
					}
			}
		break;
		
		case 3:
			{
				if(age1<age2&&age1<age3&&age1<age4&&age1<age5)
					printf("\n%25s%20d%20.2f",name1,age1,wt1);
				else
					{
						if(age2<age1&&age2<age3&&age2<age4&&age2<age5)
							printf("\n%25s%20d%20.2f",name2,age2,wt2);
						else
							{
								if(age3<age1&&age3<age2&&age3<age4&&age3<age5)
									printf("\n%25s%20d%20.2f",name3,age3,wt3);
								else
									{
										if(age4<age1&&age4<age2&&age4<age3&&age4<age5)
											printf("\n%25s%20d%20.2f",name4,age4,wt4);
										else
											printf("\n%25s%20d%20.2f",name5,age5,wt5);	
									}
							}
					}
			}
		break;
		
		case 4:
			{
				avage=(age1+age2+age3+age4+age5)/5
				printf("\n The average age of all students = %f",avage);
				avwt=(wt1+wt2+wt3+wt4+wt5)/5
				printf("\n The average weight of all students = %f",avwt);
			}
		break;
		
		default:
			printf("Press enter to continue");
		break;
	}
	
	return 0;
}