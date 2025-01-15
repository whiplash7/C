/*Nested structure for students of different schools*/
#include<stdio.h>
#include<string.h>
int main()
{
    struct student
    {
        int roll;
        char stdname[20];
    };
    struct school
    {
        int schoolid;
        char schname[20]
        struct student s[5];
    };
    struct school sch[3];
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("\n Enter school id and name for school %d",i+1);
        scanf("%d%s",&sch[i].schoolid,&sch[i].schname);
        for(j=0;j<5;j++)
        {
            printf("\n Enter roll number and name for student: ");
            scanf("%d%s",&sch[i].s[j].roll,&sch[i].s[j].name);
        }
    }

    for(i=0;i<3;i++)
    {
        printf("%5d%20s",sch[i].schoolid,sch[i].schname);
        for(j=0;j<5;j++)
        {
            printf("%5d%20s",sch[i].s[j].roll,sch[i].s[j].name);
        }
    }

    return 0;
}