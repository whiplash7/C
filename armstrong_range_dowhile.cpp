#include<stdio.h>
/*Armstrong number in range do-while*/
int main()
{
    int n,sum=0,i=0,x;
    
    do
    {
        n=i;
        sum=0;
        do
        {
            x=n%10;
            sum=sum+(x*x*x);
            n/=10;
        }while(n>0);
        if(sum==i)
        {
            printf("\n %d is Armstrong.",i);
        }
        
        i++;
    }while(i<1000);    

    return 0;
}