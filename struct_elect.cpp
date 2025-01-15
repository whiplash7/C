/*Calculate electricity bill*/
#include<stdio.h>
#include<string.h>
int main()
{
    struct consumer
    {
        int conid,conu;//conid=consumer id, conu=consumed unit
        char name[20];//name=consumer name
        float fixcharge=200,netamnt,grsamnt;//fixcharge=have to pay, netamnt=net amount, grsamnt=gross amount

    };
    int i,j;
    struct consumer c[5];

    for(i=0;i<5;i++)
    {
        printf("\nEnter consumer %d id: ",i+1);
        scanf("%d",&c[i].conid);
        printf("\nEnter consumed unit: ");
        scanf("%f",&c[i].conu);
        printf("\nEnter consumer name: ");
        scanf("%s",&c[i].name);
    }

    printf("\n Electricity bill of 5 consumers: ");

    for(i=0;i<5;i++)
    {
        printf("\n Consumer id: %d",c[i].conid);
        printf("\n Consumer name: %s",c[i].name);
        printf("\n Consumed unit: %.2f",c[i].conu);
        printf("\n Fix charge: %.2f",c[i].fixcharge);
        if(c[i].conu<=200)
        {
            c[i].grsamnt=3*c[i].conu;
        }
        else if(c[i].conu>=200 && c[i].conu<500)
        {
            c[i].grsamnt=4*c[i].conu;
        }
        else if(c[i].conu>=500 && c[i].conu<1000)
        {
            c[i].grsamnt=5*c[i].conu;
        }
        else
        {
            c[i].grsamnt=7.5*c[i].conu;
        }
        printf("\n Gross amount: %.2f",c[i].grsamnt);
        c[i].netamnt=c[i].grsamnt+c[i].fixcharge;
        printf("\n Net amount: %.2f",c[i].netamnt);
        printf("\n\n");
    }

    return 0;
}
