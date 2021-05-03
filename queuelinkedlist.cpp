#include<stdio.h>
#include<stdlib.h>

typedef struct QNode
{
    int data;
    QNode *pNext;
}QNode;

typedef struct Queue
{
    QNode *front, *rear;
}Queue;

QNode* createNode(int d)
{
    QNode* temp = (struct QNode*) malloc(sizeof(struct QNode));
    temp->data = d;
    temp->pNext = NULL;
    return temp;
}

Queue* createQueue()
{
    Queue *q = (struct Queue*) malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}
void enQueue(Queue *q)
{
    int d;
    printf("\nThe data do you want to insert: ");
    scanf("%d", &d);
    QNode *temp = createNode(d);
    //if queue is empty
    if(q->rear == NULL)
    {
        q->front = q->rear = temp;
    }
    //isn't empty
    q->rear->pNext = temp;
    q->rear = temp;
}

void deQueue(Queue *q)
{
    //if is empty
    if(q->front == NULL)
        printf("\nQUEUE is empty");
    else{
        QNode *temp = q->front;
        q->front = q->front->pNext ;
        free(temp);
    }
}

void display(Queue *q)
{
    printf("\n-------QUEUE---------\n");
    QNode *temp = q->front;
    while( temp != NULL)
    {
        printf("%d <--", temp->data);
        temp = temp->pNext;
    }
}
int main()
{
    Queue *q  = createQueue();
    enQueue(q);
    enQueue(q);
     enQueue(q);
      enQueue(q);
    display(q);
    deQueue(q);
     deQueue(q);
     display(q);

}
