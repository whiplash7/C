#include<stdio.h>
/*Divide array into 2 (value)*/
int main()
{
    int arr[10],o[5],e[5],i,n,t,j;
    printf("\n Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("\n Enter %d elements in the array: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Elements in array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    t=0;
    j=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            o[t]=arr[i];
            t++;
        }
        else
        {
            e[j]=arr[i];
            j++;        
        }
    }
    printf("\n Odd indices: ");
    for(i=0;i<t;i++)
    {
        printf("%d ",o[i]);
    }
    printf("\n Even indices: ");
    for(i=0;i<j;i++)
    {
        printf("%d ",e[i]);
    }

    return 0;
}