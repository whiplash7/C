#include<stdio.h>
#include<math.h>
/*Sin of angles 0-360*/
int main()
{
    int i=0;
    do
    {
        printf("\n %d \t %f",i,sin(i*3.141/180));
        i++;
    }while(i<360);
    
    return 0;
}