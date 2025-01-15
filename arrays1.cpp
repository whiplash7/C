#include<stdio.h>
/*5 students data*/
int main()
{
    int marks[5],max,min,i,total=0;
    float avg;

    printf("\n Enter marks of 5 students = ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\t %d",marks[i]);
    }

    max=marks[0];
    min=marks[0];
    for(i=0;i<5;i++)
    {
        total=total+marks[i];
        if(marks[i]>max)
        {
            max=marks[i];
        }
        if(marks[i]<min)
        {
            min=marks[i];
        }
    }
    printf("\n Total = %d",total);
    avg=total/5.00;
    printf("\n Average = %.2f",avg);
    printf("\n Maximum marks = %d",max);
    printf("\n Minimum marks = %d",min);
    
    return 0;
}