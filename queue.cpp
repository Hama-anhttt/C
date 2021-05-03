#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void insert();
void del();
void display();

int queue_array[MAX];
int rear = -1;
int front = -1;

int main()
{
    insert();
    insert();
    insert();

    display();
    del();
    del();
     del();
      del();
    display();
}

void insert()
{
    int data;
    if(rear == MAX-1)
        printf("\nQUEUE is Full.\n");
    else
    {
        if(front == -1)
            front  = 0;
        printf("\nInsert what data: ");
        scanf("%d", &data);
        rear = rear +1;
        queue_array[rear] = data;
    }
}
void del()
{
    if(front == -1 || front > rear)
    {
        printf("\nQUEUE is empty\n");
    }
    else{
        printf("\nQueue delete first element is: %d\n", queue_array[front]);
        front = front +1;
    }
}
void display()
{
    int i;
    if(front == -1)
        printf("\nQueue is empty\n");
    else{
        printf("\n    QUEUE : \n");
        for(i = front; i<= rear ;i++)
        {
            printf("%d <-- ", queue_array[i]);
        }
    }

}
