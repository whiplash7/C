#include<stdio.h>
/*copy array to another*/
int main()
{
    int arr[10],dest[10],i,n;
    printf("\n Enter the number of elements you want to store in the array: ");
    scanf("%d",&n);
    printf("\n Enter %d elements in the array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Elements in source array = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dest[i]=arr[i];
    }
    printf("\n Elements in destination array = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",dest[i]);
    }

    return 0;
}