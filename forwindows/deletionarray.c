#include <stdio.h>
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}
void deletion(int a[], int n, int index)
{
    if (index > n)
    {
        return -1;
    }
    for (int i = index; i <= n; i++)
    {
        a[i] = a[i + 1];
    }
}

int main()
{
    int a[100], i, n, index;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    display(a, n);
    printf("\n");
    scanf("%d", &index);
    deletion(a, n, index);
    display(a,n);

    return 0;
}