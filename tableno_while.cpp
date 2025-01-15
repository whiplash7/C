#include<stdio.h>
/*Number table*/
int main()
{
    int n,i=1;
    printf("Enter the number : ");
    scanf("%d",&n);

    while(i<=10)
    {
        printf("%d\n",i*n);
        i++;
    }

    return 0;
}