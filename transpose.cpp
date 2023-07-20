/**
 * C program to find transpose of a matrix
 */

#include <stdio.h>
#define r 3
#define c 3

int main()
{
    int A[r][c];  // Original matrix
    int B[c][r];  // Transpose matrix

    int row, col;

    /* Input elements in matrix A from user */
    printf("Enter elements in matrix of size %dx%d: \n", r, c);
    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /*
     * Find transpose of matrix A
     */
    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            /* Store each row of matrix A to each column of matrix B */
            B[col][row] = A[row][col];
        }
    }
    
    /* Print the transpose of matrix A */
    printf("Transpose of matrix A: \n");
    for(row=0; row<c; row++)
    {
        for(col=0; col<r; col++)
        {
            printf("%d ", B[row][col]);
        }

        printf("\n");
    }

    return 0;
}