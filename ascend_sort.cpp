#include<stdio.h>
/*Sort array in ascending (descending) order*/
int main()
{
    int a[10],n,i,j,t;
    printf("\n Enter number of elements in array: ");
    scanf("%d",&n);
    printf("\n Enter %d elements in array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j]) //for descending order  change > to <
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\n  Array in ascending order: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}