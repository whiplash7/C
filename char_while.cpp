#include<stdio.h>
/*Char in while*/
int main()
{
    int a=0,b=255,n;
    while(a<=254)
    {
        a++;
        n=a;
        if((n>=48&&n<=57)||(n>=65&&n<=90)||(n>=97&&n<=122))
        {
            continue;
        }
        printf("\n%d\t%c",a,a);
    }

    return 0;
}