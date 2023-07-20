#include<stdio.h>
int main()
{   
    int r1,c1,r2,c2,i,j,k;

    printf("Enter dimensions  of 1st 2D array [rxc] :");
    scanf("%dx%d",&r1,&c1);
    
    printf("\nEnter dimensions of 2nd 2D array [rxc]:");
    scanf("%dx%d",&r2,&c2);
    //check condition for multiplication
    if(c1!=r2)
    {
        printf("Error! For multiplictaion, no_of_column in arr1 == no_of_row in arr2");
        return 0;
    }
    
    //Arrays declaration
    int arr1[r1][c1], arr2[r2][c2],arr3[r1][c2];

    //Input elements in both arrays.
    printf("\nEnter elements in 1st  2D array [rxc]: \n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&arr1[i][j]);
    printf("\nEnter elements in 2d  2D array [rxc]: \n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&arr2[i][j]);
    
    //Calculte sum
    printf("Mulltiplication of 2D Arrays : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {   
            arr3[i][j] = 0;
            for(k=0;k<c1;k++)
            {
                arr3[i][j] += arr1[i][k]*arr2[k][j];
            }
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0 ;   
}