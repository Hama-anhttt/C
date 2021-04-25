#include<stdio.h>
#define MAXSIZE 100
typedef struct
{
    int top;
    int node[MAXSIZE];
} stack;

// khoi tao stack
void init(stack *S)
{
    S->top = -1;
}
// kiem tra stack rong
bool isEmpty(stack S)
{
    if(S.top == -1)
        return true;
    else
        return false;
}
// kiem tra stack day
bool isFull(stack S)
{
    if(S.top = MAXSIZE -1)
        return true;
    else return false;
}
// them 1 phan tu vao stack
void push(stack *S, int x)
{
    if(isFull(*S) == true)
    {
         printf("\n... Stack da day..\n");
    }
    else
    {
        S->top++;
        S->node[S->top] = x;
    }
}
//lay ra 1 phan tu
void pop (stack *S, int *value)
{
    if(isEmpty(*S) == true)
    {
        printf("\n... Stack rong..\n");
    }
    else
    {
        *value = S->node[S->top];
        S->top--;
    }
}
// gia tri cua top
void peek(stack *S)
{
    if(S->top >= 0)
    {
        printf("gia tri cua phan tu la: %d", S->node[S->top]) ;
    }
    else
       printf("\n... Stack rong..\n") ;
}
void display(stack *S)
{
    int i;
    for( i = S->top; i>= 0; i--)
    {
        printf("\n %d", S->node[S->top]);
    }
}
int main()
{
    int data;
    stack lifo;
    init(&lifo);
    push(&lifo, 10);
    push(&lifo, 3);
    display(&lifo);

}
