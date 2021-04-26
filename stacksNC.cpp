#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct Node
{
    int data;
    Node *pNext;
};
typedef struct LinkedList
{
    Node *pHead;
} List;

// khoi tao stack
void init(List *s)
{
    s->pHead = NULL;
}

bool isEmpty(List *s)
{
    if(s->pHead == NULL)
        return true;
    else
        return false;
}
// tao Node
Node *createNode(int x)
{
    Node *pNode;
    pNode = (Node*)malloc(sizeof(Node));
    pNode->data = x;
    pNode->pNext = NULL;
}
//push vao stack
void push(List *s)
{
    int x;
    printf("Gia tri muon PUSH: ");
    scanf("%d", &x);
    Node *pNode = createNode(x);
    pNode->pNext = s->pHead;
    s->pHead = pNode;
}
// pop 1 phan tu from stack
void pop(List *s)
{
    Node *pNode = s->pHead;
    if(isEmpty(s) == true)
        printf("\n.... DS trong... khong the POP....\n");
    else
    {
        s->pHead = pNode->pNext;
        delete pNode;
        printf("\n XOA XONG\n");
    }
}
// tim 1 node
Node *findNode(List *s, int x)
{
    Node *temp = s->pHead;
    while(temp!= NULL)
    {
        if(temp->data == x)
        {
            return temp;
        }
        else temp = temp->pNext;
    }
    if(temp == NULL)
        return NULL;
}
// DISPLAY
void display(List *s)
{
    Node *temp = s->pHead;
    if(isEmpty(s) == true)
        printf("\n.....DS trong.......Can't display......\n");
    else
    {
        printf("\n----------NGAN XEP STACK : -------------\n");
        while(temp != NULL)
        {
            printf("\n %d", temp->data);
            temp = temp->pNext;
        }
    }

}

int main()
{
    int x;
    List lifo;
    init(&lifo);
    int choice;
    printf("........What Option Do You Want To Check?.......\n");
    printf("\n1. Push 1 phan tu\n");
    printf("\n2. Pop 1 phan tu\n");
    printf("\n3. Tim 1 phan tu trong Stack.\n");
    printf("\n4. Exit.\n");
    printf("-------------------------------------------------------\n");

    while(choice<=4)
    {
        printf("\nYOUR OPTION: ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("\n------PUSH-------\n ");
            push(&lifo);
            display(&lifo);
            break;
        case 2:
            printf("\n------POP--------\n");
            pop(&lifo);
            display(&lifo);
            break;
        case 3:
            printf("\n------FIND-------\n");
            printf("\nPhan tu muon tim: ");
            scanf("%d", &x);
            if(findNode(&lifo, x) != NULL)
                printf("\n Anwser: %d", findNode(&lifo, x));
            else
                printf("\n Khong co gia tri can tim.\n");
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("\n Nhap lai choice\n");
            break;
        }
    }

    return 0;
}
