#include<stdio.h>
/*Search an element in array*/
int main()
{
    int a[10]={10,29,38,47,56,65,74,83,92,1},i,p;
    printf("\n Array: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n Enter an element to search: ");
    scanf("%d",&p);
    for(i=0;i<10;i++)
    {
        if(a[i]==p)
        {
            printf("\n Element %d found at position %d",p,i);
            break;
        }
        else
        {
            printf("\n Element %d not found.",p);
            break;
        }
    }

    return 0;
}