/*Convert decimal to binary by equation*/
#include<stdio.h>

void dec_bin(int dec)
{
    int bin[32];
    int i=0;
    while(dec>0)
    {
        bin[i]=dec%2;
        dec=dec/2;
        i++;
    }
    for(i=i-1; i>=0; i--)
    {
        printf("%d", bin[i]);
    }
}

int main()
{
    int dec;
    printf("\n Enter a decimal number: ");
    scanf("%d", &dec);
    dec_bin(dec);

    return 0;
}