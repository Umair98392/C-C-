#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* next;

};
typedef struct node* nodeptr;
nodeptr start= NULL;


nodeptr getnode();
void freenode(nodeptr p);
nodeptr insert_at_beg(nodeptr startt,int x);
nodeptr insert_at_end(nodeptr startt,int x);
void insert_after(nodeptr p, int x);
void delete_at_beg();
void delete_at_end();
void delete_after(nodeptr p);
void traverse();
int no_of_nodes();
nodeptr find_ptr_to_loc(int loc);


void main(){
    int option;
    do
    {   int x,s,c,loc;
        nodeptr p;
        printf("\n\n * ****MAIN MENU * ****");
        printf("\n 1: Insert node at the beginning");
        printf("\n 2: Insert node at the end");
        printf("\n 3: Insert node after a given node");
        printf("\n 4: Delete a node from the beginning");
        printf("\n 5: Delete a node from the end");
        printf("\n 6: Delete a node after a given node");
        printf("\n 7: Number of nodes in a list");
        printf("\n 8: Traverse/Display a list");
        printf("\n 9: EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch(option)
        { 
            case 1:
                printf("enter value to inserted : ");
                scanf("%d",&x); 
                insert_at_beg(start,x);
                break;
            case 2:
                printf("enter value to inserted : ");
                scanf("%d",&x); 
                insert_at_end(start,x);
                break;
            case 3:
                printf("Enter a location node after which you want to insert : ");
                scanf("%d",&loc);
                p = find_ptr_to_loc(loc);
                printf("enter value to inserted : ");
                scanf("%d",&x);

                insert_after(p, x);
                break;
            
            case 4: 
                delete_at_beg();
                break;
            case 5: 
                delete_at_end();
                break;
            case 6:
                printf("Enter a location node after which you want to insert : ");
                scanf("%d",&loc);
                p = find_ptr_to_loc(loc); 
                delete_after(p);
                break;
            case 7:
                c = no_of_nodes();
                printf("no.of nodes in Linked list is : %d",c);
                break;
            case 8:
                traverse();
                break;
        }
    }while(option !=9);
}


nodeptr getnode()   //to create a node
{
    nodeptr p;
    p = (nodeptr)malloc(sizeof(nodeptr));
    if(p==NULL)
    {
        printf("Unable to create a node\n");
        return 0;
    }
    return p;
}


void freenode(nodeptr p)    //to deallocate node memory
{
    if(p==NULL)
    {
        printf("Pointer does not exist");
    }
    else
    {
        free(p);
    }
}


void traverse()     //to display list
{
    nodeptr ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("\t %d", ptr->data);
        ptr = ptr->next;
    }
}


nodeptr insert_at_beg(nodeptr startt, int x) 
{
    nodeptr q;
    q = getnode();
    q->data = x;
    if (q==NULL)
    {
        printf("overflow:can't allocate memory");
        return;
    }
    if(start == NULL)
    {
        q->next = NULL;
    }
    else{
        q->next = start;
    }
    start = q;
    return start;
    
}


nodeptr insert_at_end(nodeptr startt,int x)
{
    nodeptr q,loc;
    q = getnode();
    q->data = x;
    q->next = NULL;
    if(start == NULL)
    {
        start = q;
    }
    else{
        loc = start;
        while(loc->next !=NULL)
        {
            loc = loc->next;
        }
        loc->next = q;
    }

    return start; 
}


void insert_after(nodeptr p, int x)
{
    nodeptr q;
    q = getnode();
    q->data = x;
    if (p==NULL)
    {
        printf("void insertion : linked list not exist");
        return;
    }
    else
    {
        q->next = p->next;
        p->next = q;
        return;
    }
}


void delete_at_beg()
{
    nodeptr p;
    if(start == NULL)
    {
        printf("No nodes are exist.\n");
        return ;
    }
    else
    {
        p = start;
        start =start -> next;
        freenode(p);
    }
}


void delete_at_end()
{
    nodeptr p,prev;
    if(start == NULL)
    {
        printf("List is empty\n");
        return ;
    }
    else
    {
        p = start;
        prev = start;
        while(p -> next != NULL)
        {
            prev = p;
            p = p -> next;
        }
        prev -> next = NULL;
        freenode(p);
    }
}


void delete_after(nodeptr p)
{
    nodeptr q;
    if (p==NULL || p->next==NULL)
    {
        printf("Cannot Delete");
        return;
    }
    q=p->next;
    p->next = q->next;
    freenode(q);

}


int no_of_nodes()
{
    nodeptr q;
    int count = 0;
    q = start;
    while(q !=NULL)
    {
        count++;
        q= q->next;
    }
    return count;
}


nodeptr find_ptr_to_loc(int loc)
{
    nodeptr q;
    int i;
    q = start;
    for(i=1;i<loc;i++)
    {
        q = q->next;
    }
    return(q);
}