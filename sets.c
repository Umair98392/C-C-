#include<stdio.h>
//Union and intersection Function Declaration
void uni(int arr1[],int arr2[],int size1,int size2);
void in(int arr1[],int arr2[],int size1,int size2);

//Main code
int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("Union of Sets : ");
    uni(arr1,arr2,m,n);
    
    printf("\n\nIntersection of Sets : ");      
    in(arr1,arr2,m,n);

    getchar();
    return 0;
}



//Intesection Func.
void in(int arr1[],int arr2[],int size1,int size2)
{
    int i,j;
    for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf(" %d",arr1[i]);
            }
        }
    }
}


//Union func
void uni(int arr1[],int arr2[],int size1,int size2)
{
    int i,j,k,size;
    size = size1 + size2;
    int uni[size];


    //copy first set element in third array
    j=0;
    for(i=0;i<size1;i++)
    {
        uni[j] = arr1[i];
        j++;
    };
    
    
    //copy second set element in third array
    for(i=0;i<size2;i++)
    {
        uni[j] = arr2[i];
        j++;
    };


    //removing repeated element
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;)
        {
            if(uni[i]==uni[j])
            {
                for(k=j;k<size;k++)
                {
                    uni[k] = uni[k+1];
                }
                size--;
            }
            else
            {
                j++;
            }
        }
    }


    //Print Union of sets
    for(i=0;i<size;i++)
    {
        printf(" %d",uni[i]);
    }
}