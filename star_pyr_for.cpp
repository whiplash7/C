#include<stdio.h>
/*star pyramid*/
int main()
{
    int i,j,k;
    printf("\n Enter number of rows = ");
    scanf("%d",&i);
    for(j=1;j<i;j++)
    {
        for(k=j;k>=1;k--)
        {
            printf("  ");
        }
        printf(" *");
        printf("\n");
    }

    return 0;
}