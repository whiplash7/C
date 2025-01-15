#include<stdio.h>
/*Replace an element in array*/
int main()
{
    int a[10]={10,29,38,47,56,65,74,83,92,1},i,p,r;
    printf("\n Array: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n Enter an element to replace: ");
    scanf("%d",&r);
    printf("\n Enter the position to replace: ");
    scanf("%d",&p);
    for(i=0;i<10;i++)
    {
        if(i==p)
        {
            a[i]=r;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}