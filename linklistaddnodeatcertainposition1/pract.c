#include <stdio.h>
int main()
{
    int max, n, i, count=0, a[100];
    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[1];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (max == a[i])
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}