#include<stdio.h>
/*Multiplication of first 10 numbers*/
int main()
{
    int i=1,n=1;
    while(i<=10)
    {
        n=n*i;
        i++;
    }
    printf("%d",n);
}