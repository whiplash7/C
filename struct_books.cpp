/*Structure for books receipt*/
#include<stdio.h>
#include<string.h>
int main()
{
    struct books
    {
        int isbn,price,qty,total,nett;//isbn, price, quantity, total, whole amount
        char title[50],author[50];//title, author
    };
    int i,j;
    struct books b[i];

    for(i=0 ; i<5 ; i++)
    {
        printf("\n Enter the details of book %d\n",i+1);
        printf("\n Enter the title of the book:");
        scanf("%s",b[i].title);
        printf("\n Enter the author of the book:");
        scanf("%s",b[i].author);
        printf("\n Enter the ISBN of the book:");
        scanf("%d",&b[i].isbn);
        printf("\n Enter the price of the book:");
        scanf("%d",&b[i].price);
        printf("\n Enter the quantity of the book:");
        scanf("%d",&b[i].qty);
    }

    b[i].total=0;
    for(i=0 ; i<5 ; i++)
    {
        b[i].total=b[i].price*b[i].qty;
    }

    for(i=0 ; i<5 ; i++)
    {
        printf("\n\n Book %d details:\n",i+1);
        printf("\n Title of the book:%s\n",b[i].title);
        printf("\n Author of the book:%s\n",b[i].author);
        printf("\n ISBN of the book:%d\n",b[i].isbn);
        printf("\n Price of the book:%d\n",b[i].price);
        printf("\n Quantity of the book:%d\n",b[i].qty);
        printf("\n Total price of the book:%d\n",b[i].total);
    }

    b[i].nett=0;
    for(i=0 ; i<5 ; i++)
    {
        b[i].nett+=b[i].total;
    }

    printf("\n Total amount of all books:%d\n",b[i].nett);

    return 0;
}