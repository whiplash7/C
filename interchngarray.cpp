#include<stdio.h>
/*Interchange two arrays*/
int main()
{
    int a[10],b[10],c[10],i;
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
    for(i=0;i<10;i++)
    {
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    printf("\n First array after interchange: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n Second array after interchange: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}