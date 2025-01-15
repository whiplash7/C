#include<stdio.h>
/*Armstrong number do-while*/
int main()
{
    int n,i,sum=0,N;
    printf("Enter a number:");
    scanf("%d",&n);
    N=n;
    i=n;
    do
    {
        i=n%10;
        sum=sum+i*i*i;
        n=n/10;
    }while(n>0);
    if(sum==N)
    {
        printf("%d is an Armstrong number",N);
    }
    else
    {
        printf("%d is not an Armstrong number",N);
    }

    return 0;
}