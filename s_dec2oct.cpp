/*Convert decimal to octal by equation*/
#include<stdio.h>

void dec_oct(int dec)
{
    int oct=0,i=1;
    while(dec!=0)
    {
        oct=oct+(dec%8)*i;
        dec=dec/8;
        i=i*10;
    }
    printf("%d", oct);
}

int main()
{
    int dec;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    dec_oct(dec);

    return 0;
}