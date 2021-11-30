#include <stdio.h>
int main()
{
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, temp;
    for (i = 0; i < 3; i++)
    {
        for (j = i; j < 3; j++)
        {
            temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (i = 0; i < 3; i++)
        {
            printf("%d", A[i][j]);
        }
    }

    return 0;
}