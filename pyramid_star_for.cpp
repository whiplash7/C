#include<stdio.h>
/*star pyramid*/
int main()
{
    int i,j,k;
    printf("\n Enter number of rows = ");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        for(k=j;k>=0;k--)
        {
            printf(" *");
        }
        printf("  ");
        printf("\n");
    }

    return 0;
}