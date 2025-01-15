#include<stdio.h>
/*Prime number in range do-wile*/
int main()
{
    int a,b,n,i,s,q;
    printf("Enter a range: ");
    scanf("%d%d",&a,&b);
    (a>b)?(i=a,n=b):(b>a)?(i=b,n=a):printf("Enter a valid no. ");
    
    do
    {
        s=2;
        do
        {
            if(i%s==0)
            {
                break;
            }
            s++;
            q=s;
            if(q>i/2)
            {
                printf("\n %d is a prime number",i);
            }
        }while(s<=i/2);
        i--;
    }while(i>=n);
    
    
return 0;
}