#include <stdio.h>
int main()
{
    int arr[1000],  i, j,n;
    float sum, zero,z = 0, count = 0,m = 0, sub, l,   k, c;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
        if (arr[i] < 0)
        {
            z++;
        }
        if (arr[i] == 0)
        {
            m++;
        }
    }
    sum = (float)count/ n;
    sub = (float)z / n;
    zero = (float)m / n;

    printf("%f\n", sum);
    printf("%f\n", sub);
    printf("%f\n", zero);

    return 0;
}