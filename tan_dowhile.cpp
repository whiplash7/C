#include<stdio.h>
#include<math.h>
/*Tan of angles 0-360*/
int main()
{
    int i=0;
    do
    {
        if(i==90||i==270)
        {
            printf("\n %d = undefined",i);
            continue;
        }
        printf("\n %d \t %f",i,sin(i*3.141/180)/cos(i*3.141/180));
        i++;
    }while(i<360);
    
    return 0;
}