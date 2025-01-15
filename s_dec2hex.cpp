/*Convert decimal to hexadecimal by equation*/
#include<stdio.h>

void dec_hex(int dec)
{
    int hex[100];
    int i=0;
    while(dec>0)
    {
        hex[i]=dec%16;
        dec=dec/16;
        i++;
    }
    for(int j=i-1; j>=0; j--)
    {
        if(hex[j]<10)
            printf("%d", hex[j]);
        else
            printf("%c", hex[j]+55);
    }
}

int main()
{
    int dec;
    printf("\n Enter a decimal number: ");
    scanf("%d",&dec);
    dec_hex(dec);

    return 0;
}