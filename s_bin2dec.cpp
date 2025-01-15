/*Convert binary to decimal by equation*/
#include<stdio.h>
#include<math.h>

void bin_dec(int bin)
{
    int dec=0, i=0;
    while(bin!=0)
    {
        dec=dec+(bin%10)*(pow(2,i));
        bin=bin/10;
        i++;
    }
    printf("%d", dec);
}

int main()
{
    int bin;
    printf("\n Enter a binary number: ");
    scanf("%d", &bin);
    bin_dec(bin);
    
    return 0;
}