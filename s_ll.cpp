#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* createNode(int data)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

void In_begin(struct Node** head, int data)
{
    struct Node* newNode=createNode(data);
    newNode->next=*head;
    *head=newNode;
}

void In_end(struct Node** head, int data)
{
    struct Node* newNode = createNode(data);
    if (*head==NULL)
    {
        *head=newNode;
    }
    else
    {
        struct Node* temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void Del(struct Node** head, int key)
{
    struct Node* temp=*head;
    struct Node* prev=NULL;

    if(temp!=NULL && temp->data==key)
    {
        *head=temp->next;
        free(temp);
        return;
    }

    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL)
    {
        printf("\nKey not found!!!");
        return;
    }

    prev->next=temp->next;
    free(temp);
}

void Disp(struct Node* head)
{
    if(head==NULL)
    {
        printf("\nThe list is empty!!!");
        return;
    }

    struct Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d -> ", temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node* head=NULL;
    int ch, n;

    do
    {
        printf("\nMenu:");
        printf("\n1... Insert at beginning");
        printf("\n2... Insert at end");
        printf("\n3... Delete a node");
        printf("\n4... Display the list");
        printf("\n5... Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter the number to insert at beginning: ");
                scanf("%d", &n);
                In_begin(&head, n);
            break;

            case 2:
                printf("Enter the number to insert at end: ");
                scanf("%d", &n);
                In_end(&head, n);
            break;

            case 3:
                printf("Enter the number to delete: ");
                scanf("%d", &n);
                Del(&head, n);
            break;

            case 4:
                printf("Linked list: ");
                Disp(head);
            break;

            case 5:
                printf("Tata.....\n");
            break;

            default:
                printf("Invalid choice! Please try again.\n");
            break;
        }
    }while(ch!=5);

    return 0;
}