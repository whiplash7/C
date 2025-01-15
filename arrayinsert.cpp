#include<stdio.h>
/*Insert element in array*/
int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9},e,i,naoka[11],p;
    printf("Original array: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter element to insert: ");
    scanf("%d",&e);
    printf("\nEnter position to insert: ");
    scanf("%d",&p);
    for(i=0;i<11;i++)
    {
        if(i<p)
            naoka[i]=arr[i];
        if(i==p)
            naoka[i]=e;
        if(i>p)
            naoka[i]=arr[i-1];
    }
    printf("\n Array after insertion: ");
    for(i=0;i<11;i++)
    {
        printf("%d ",naoka[i]);
    }

    return 0;
}