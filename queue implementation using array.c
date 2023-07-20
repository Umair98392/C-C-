#include<stdio.h>    
#define maxsize 5  
void enqueue();  
void dequeue();  
void display();  
int front = -1, rear = -1;  
int queue[maxsize];  
void main ()  
{  
    int choice; 
    printf("\nPerform operations on the queue:");
    printf("\n1.Enqueue the element");
    printf("\n2.Dequeue the element");
    printf("\n3.Show");
    printf("\n4.End");  
    while(choice != 4)   
    {      
        printf("\nEnter the choice :");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
                enqueue();  
                break;  
            case 2:  
                dequeue();  
                break;  
            case 3:  
                display();  
                break;  
            case 4:  
                exit(0);  
                break;  
            default:   
                printf("\nEnter valid choice??\n");  
        }  
    }  
}  
void enqueue()  
{  
    int item;  
    printf("\nEnter the element to be added : ");  
    scanf("\n%d",&item);      
    if(rear == maxsize-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;    
      
}  
void dequeue()  
{  
    int item;   
    if (front == -1 || front > rear)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
              
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
        printf("\nPopped element: %d", item);  
    }  
      
      
}  
      
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nElements present in the queue: \n");  
        for(i=front;i<=rear;i++)  
        {  
            printf(" %d ",queue[i]);  
        }     
    }  
}  
