#include <stdio.h>
int main()
{
    int a[8] = {1, 2, 3, 5, 6, 89, 76, 88};
    int b[7] = {4, 6, 8, 2, 9, 46, 34};
    int c[15], i, j, n1, n2, n3, found;
    n1 = 8, n2 = 7, n3 = 0;
    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    n3 = n1;
    for (i = 0; i < n2; i++)
    {
        found = 0;
        for (j = 0; j < n1 && !found; j++)
        {
            if (b[i] == a[j])
            {
                found = 1;
            }
        }
        if (!found)
        {
            c[n3++] = b[i];
        }
    }
    printf("\nAfter union");
    for (i = 0; i < n3; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}