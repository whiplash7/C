#include<stdio.h>
/*descending order while*/
int main()
{
    int x,y,i,n;
    printf("\n Enter range x to y = ");
    scanf("%d%d",&x,&y);
    
    (x>y)?(i=x,n=y):(y>x)?(i=y,n=x):printf("Enter valid range!");
    while(i>=n)
    {
        printf("\n%d",i);
        i--;
    }
    

    return 0;
}