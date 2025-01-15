#include<stdio.h>
/*Prime number do-wile*/
int main()
{
    int n,i=2;
    printf("Enter a number: ");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
        {
            printf("\n %d is not a prime number.",n);
            break;
        }
        i++;
    }while(i<=n/2);
    if(n%i!=0)
    {
        printf("\n %d is a prime number.",n);
    }
    
return 0;
}