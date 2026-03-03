// Riyan Rickson Castelino 
// Pes2ug25am339 
// week 5 program 5
#include <stdio.h>

int main()
{
    int mat[3][3],rsum=0, csum=0,pd = 0, sd = 0,i,j;

    printf("Enter elements of 3 x 3 matrix:\n");

    for( i = 0; i < 3; i++)
    {
        for( j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nSum of each row:\n");

    for( i = 0; i < 3; i++)
    {
        rsum = 0;
        for(int j = 0; j < 3; j++)
        {
            rsum += mat[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rsum);
    }

    printf("\nSum of each column:\n");

    for(int j = 0; j < 3; j++)
    {
        csum = 0;
        for(int i = 0; i < 3; i++)
        {
            csum += mat[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, csum);
    }

    for(int i = 0; i < 3; i++)
    {
        pd += mat[i][i];
        sd += mat[i][2 - i];
    }

    printf("\nSum of main diagonal elements = %d\n", pd);
    printf("Sum of secondary diagonal elements = %d\n", sd);

    return 0;
}