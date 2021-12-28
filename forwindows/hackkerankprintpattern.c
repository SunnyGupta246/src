#include <stdio.h>
int main()
{
    int arr[100][100];
    int p,n, m;
    scanf("%d", &n);

    m = 2 * n - 1;
    p=m;
    int k = 0;

    while (n != 0)
    {

        for (int i = k; i < m; i++)
        {
            for (int j = k; j < m; j++)
            {

                arr[i][j] = n;

            }
            printf("\n");
        }
        n--;
        k++;
        m--;
    }

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}