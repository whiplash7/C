#include<stdio.h>
/*Keep adding the numbers*/
int main()
{
    int n,i,sum=0,x;
    char ch;

    while(1)
    {
        printf("\n Enter number to add = ");
        scanf("%d",&n);
        sum=sum+n;
        fflush(stdin);
        printf("\n Enter to continue, x to conclude: ");
        ch=getchar();
        if(ch=='x')
        {
            break;
        }
    }
    printf("\n Sum = %d",sum);
    
    return 0;
}