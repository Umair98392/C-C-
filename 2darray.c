#include <stdio.h>
int main()
{
    int b[2][2],a[2][2],mul[2][2];
    int i,j,k,num;
    printf("Enter 2X2 matrix A: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }
    
    printf("\nEnter 2X2 matrix B: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d" , &b[i][j]);
        }
    }

    
    // addition
    printf("Adiition of Matrix A and B is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("% d" , (a[i][j] + b[i][j]));
        }
        printf("\n");
    }

    // Subtraction
    printf("Subtraction of Matrix A and B is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("% d" , (a[i][j] - b[i][j]));
        }
        printf("\n");
    }
    
    //Multiplication
    printf("Multiply of the matrix A and B is:\n");    
    for(i=0;i<2;i++)    
    {    
        for(j=0;j<2;j++)    
        {    
            mul[i][j]=0;    
            for(k=0;k<2;k++)    
            {    
                mul[i][j]+=a[i][k]*b[k][j];    
            }
            printf(" %d", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}