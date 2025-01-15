#include<stdio.h>
/*sum of all even number in range*/
int main()
{
    int a,b,i,sum=0;
    printf("\n Enter the range of number = ");
    scanf("%d%d",&a,&b);

    i=a;
    while(i<=b)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }
    printf("\n Sum of all even number in range = %d",sum);

    return 0;
}