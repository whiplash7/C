#include<stdio.h>
/*Fiboacci Seq*/
int main()
{
    int n,i,t1=0,t2=1,nxt=t1+t2;
    printf("\n Enter number of terms = ");
    scanf("%d",&n);

    printf("Fibonacci seq = %d, %d, ",t1,t2);
    
    for(i=3;i<=n;++i)
    {
        printf("%d, ",nxt);
        t1=t2;
        t2=nxt;
        nxt=t1+t2;
    }

    return 0;
}