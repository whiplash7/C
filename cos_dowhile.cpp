#include<stdio.h>
#include<math.h>
/*Cos of angles 0-360*/
int main()
{
    int i=0;
    do
    {
        printf("\n %d \t %f",i,cos(i*3.141/180));
        i++;
    }while(i<360);
    
    return 0;
}