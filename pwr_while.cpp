#include<stdio.h>
/*power while*/
int main()
{
    int x,y,sum=1;
    printf("Enter base and power:");
    scanf("%d%d",&x,&y);
    while(y>0)
    {
        sum=sum*x;
        y--;
    }
    printf("Result is %d",sum);

    return 0;
}