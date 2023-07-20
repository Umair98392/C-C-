#include<stdio.h>
int binary_search(int arr[], int low, int high,int x);

int main()
{
    int n,x,r;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    
    int arr[n];
    printf("\nEnter %d elements in increasing order : ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter element to be search : ");
    scanf("%d",&x);
    
    //Function call
    r = binary_search(arr,0,n-1,x);
    if(r ==-1)
    {
        printf("Element %d not found in array.",x);
        return 0;
    }
    printf("Element %d found at index %d.",x,r);
    return 0;
}


int binary_search(int arr[], int low, int high,int x)
{   
    int mid;
    if(high>=low)
    {
        mid = (low+high)/2;
        if(x>arr[mid])
            return binary_search(arr,mid+1,high,x);
        else if (x<arr[mid])
            return binary_search(arr, low, mid-1, x);
        else 
            return mid;
    }   
    return -1;
}