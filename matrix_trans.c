#include<stdio.h>
int main()
{   
    int r,c,i,j;

    printf("Enter dimensions  of 2D array [rxc]:");
    scanf("%dx%d",&r,&c);
    
    //Arrays declaration
    int arr[r][c],transpose[c][r];

    //Input elements in array.
    printf("\nEnter elements in 2D array : \n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    
    //Calculte transpose
    printf("Transpose of 2D Array : \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {   
            transpose[i][j] = arr[j][i];
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0 ;   
}