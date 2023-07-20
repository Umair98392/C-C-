#include<stdio.h>
int main()
{   
    int r1,c1,r2,c2,i,j;

    printf("Enter dimensions  of 1st 2D array [rxc] :");
    scanf("%dx%d",&r1,&c1);
    
    printf("\nEnter dimensions of 2nd 2D array [rxc]:");
    scanf("%dx%d",&r2,&c2);
    
    //check condition for addition.
    if(r1!=r2 || c1!=c2)
    {
        printf("Error! Both Arrays not have same dimensions");
        return 0;
    }
    
    //Arrays declaration
    int arr1[r1][c1], arr2[r2][c2],arr3[r1][c1];

    //Taking elements input in array.
    printf("\nEnter elements in 1st  2D array : \n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&arr1[i][j]);
    printf("\nEnter elements in 2d  2D array : \n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&arr2[i][j]);
    
    
    //Calculte sum
    printf("Sum of 2D Arrays : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0 ;
    
}