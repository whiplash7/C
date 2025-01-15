/*Store Information of 5 students Using Structure*/
#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        char name[20],grade;
        int roll;
        float marks[5][6],percentage,total;
    };
    int i,j;
    struct student s[5];
    
    for(i=0;i<5;i++)
    {
        printf("\n Enter the details of student %d: ",i+1);
        printf("\n Enter name: ");
        scanf("%s",&s[i].name);
        printf("\n Enter roll number: ");
        scanf("%d",&s[i].roll);
        printf("\n Enter marks: ");
        for(j=0;j<6;j++)
        {
            scanf("%f",&s[i].marks[i][j]);
        }
    }

    for(i=0;i<5;i++)
    {
        s[i].total=0;
        for(j=0;j<6;j++)
        {
            s[i].total=s[i].total+s[i].marks[i][j];
        }
        s[i].percentage=(s[i].total/6);
    }

    for(i=0;i<5;i++)
    {
        printf("\n Student %d details: ",i+1);
        printf("\n Name: %s",s[i].name);
        printf("\n Roll number: %d",s[i].roll);
        printf("\n Marks: ");
        for(j=0;j<6;j++)
        {
            printf("%.2f ",s[i].marks[i][j]);
        }
        printf("\n Total: %.2f",s[i].total);
        printf("\n Percentage: %.2f",s[i].percentage);
        printf("\n Grade: ");
        if(s[i].percentage>=90)
            printf("A");
        else if(s[i].percentage>=75)
            printf("B");
        else if(s[i].percentage>=60)
            printf("C");
        else if(s[i].percentage>=35)
            printf("D");
        else if(s[i].percentage<35)
            printf("F");
        printf("\n");
    }

    return 0;
}