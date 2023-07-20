#include <stdio.h>
void search(int arr[], int n, int x);
 
int main(void)
{
    int n,x;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    
    int arr[n];
    printf("\nEnter %d elements in array : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter element  to be search : ");
    scanf("%d",&x);
 
    // Function call
    search(arr, n, x);
    return 0;
}


void search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("Element %d is found at index %d\n",x,i);
            return;
        }
    }
    printf("Element %d is not found in array!\n",x);
}
