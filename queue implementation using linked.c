#include <stdio.h>
#include<malloc.h>

struct queue
{
    int info;
    struct queue* ptr;
};
typedef struct queue* que;
que front = NULL, rear = NULL;

void enq(int data);
void deq();
void display();

int main()
{
    int no, ch, e;
    printf("\nPerform operations on the queue:");
    printf("\n1: Enqueue");
    printf("\n2: Dequeue");
    printf("\n3: Display");
    printf("\n4: Exit");

    do
    {
        printf("\nEnter the choice : ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
                printf("\nEnter the element to be added : ");
                scanf("%d", &no);
                enq(no);
                break;
            case 2:
                deq();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!!");
                break;
        }
    } while(ch != 4);

    return 0;
}

/* Enqueing the queue */
void enq(int data)
{
    que p;
    p = (que)malloc(sizeof(que));
    p->info = data;
    p->ptr = NULL;
    if (rear == NULL)
    {
        front = rear = p;
    }
    else
    {
        rear->ptr = p;
        rear = p;
    }
}

/* Displaying the queue elements */
void display()
{
    que front1 = front;

    if (front1 == NULL)
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != NULL)
    {
        printf("%d ", front1->info);
        front1 = front1->ptr;
    }
}

/* Dequeing the queue */
void deq()
{
    que p;
    if (front == NULL)
    {
        printf("\nError: Trying to dequeue from empty queue");
        return;
    }
    else
    {
        p = front;
        front = front->ptr;
        if (front == NULL)
        {
            rear = NULL;
        }
        printf("\nDequeued value : %d", p->info);
        free(p);
    }
}















































