#include<stdio.h>
/*binary sequence*/
int main()
{
    int a,b,c,d,e,f,g,h;
    for (a=0;a<=1;a++)
    {
        for (b=0;b<=1;b++)
        {
            for (c=0;c<=1;c++)
            {
                for (d=0;d<=1;d++)
                {
                    for (e=0;e<=1;e++)
                    {
                        for (f=0;f<=1;f++)
                        {
                            for (g=0;g<=1;g++)
                            {
                                for (h=0;h<=1;h++)
                                {
                                    printf("\n %5d%5d%5d%5d%5d%5d%5d%5d%15d%15x%15o%15c",a,b,c,d,e,f,g,h,128*a+64*b+32*c+16*d+8*e+4*f+2*g+1*h,128*a+64*b+32*c+16*d+8*e+4*f+2*g+1*h,128*a+64*b+32*c+16*d+8*e+4*f+2*g+1*h,128*a+64*b+32*c+16*d+8*e+4*f+2*g+1*h);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}