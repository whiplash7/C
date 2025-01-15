#include<stdio.h>
/*Merge two arrays and sort*/
int main()
{
    int a[10],b[10],n1,n2,i,m[20],j,t;
    printf("\n Enter the elements of first array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the elements of second array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<20;i++)
    {
        if(i<10)
        {
            m[i]=a[i];
        }
        else
        {
            m[i]=b[i-10];
        }
    }

    for(i=0;i<20;i++)
    {
        for(j=i+1;j<20;j++)
        {
            if(m[i]>m[j]) //for descending order  change > to <
            {
                t=m[i];
                m[i]=m[j];
                m[j]=t;
            }
        }
    }

    printf("\n Merged array: ");
    for(i=0;i<20;i++)
    {
        printf("%d ",m[i]);
    }

    return 0;
}