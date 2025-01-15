#include<stdio.h>
/*copy array to another in reverse*/
int main()
{
    int arr[10],dest[10],i,n,j;
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
    j=0;
    for(i=n-1;i>=0;i--)
    {
        dest[j]=arr[i];
        j++;
    }
    printf("\n Elements in destination array = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",dest[i]);
    }

    return 0;
}