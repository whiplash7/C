/*Remove duplicate  elements from an array*/
#include <stdio.h>
int  main()
{
    int a[10],n,i,t,j;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("\n Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(t=j;t<n-1;t++)
                {
                    a[t]=a[t+1];
                }
            }
        }
    }
    printf("\n Array after removing duplicates: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}