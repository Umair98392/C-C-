#include<stdio.h>
#include<malloc.h>

struct stack
{
int data;
struct stack* next;
};
typedef struct stack* st;
st top = NULL;
void push();
void display();
void pop();

void main(){
    int option;
    printf("\nPerform operations on the stack:");
    printf("\n1: Push");
    printf("\n2: Pop");
    printf("\n3: Display a stack");
    printf("\n4: EXIT");
    do
    {   
        
        printf("\n\nEnter the choice : ");
        scanf("%d", &option);
        switch(option)
        { 
            case 1: 
                push();
                break;
            
            case 2: 
                pop();
                break;
           
            case 3:
                display();
                break;
            default:
                printf("\nInvalid choice!!");
        }
    }while(option !=4);
}



void display()     //to display list
{
    st p;
    p = top;
    if (p==NULL)
        printf("stack is empty");
    else{
        printf("\nElements present in the stack: \n");
        while (p != NULL){
            printf("\n%d", p->data);
            p = p->next;
        }
    }
}


void push() 
{
    st p;
    p = (st)malloc(sizeof(st));
    
    printf("\nEnter the element to be added onto the stack: ");
    scanf("%d",&p->data);

    p->next = top;
    top = p;
}


void pop()
{
    st p;
    p =top;
    if(top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        top = top->next;
        printf("\nPopped element: %d", p->data);
        free(p);
    }

}