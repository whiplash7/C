/*Check how many currency note in given amount*/
#include<stdio.h>
int main()
{
    int amnt,note[9]={500, 200, 100, 50, 20, 10, 5, 2, 1};
    printf("\n Enter the amount of money: ");
    scanf("%d",&amnt);
    for(int i=0;i<9;i++)
    {
        int flag;
        for(flag=0; amnt>=note[i]; flag++)
        {
            amnt-=note[i];
        }
        printf("\n %d notes of %d Rupees",flag,note[i]);
    }

    return 0;
}