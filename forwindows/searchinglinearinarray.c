#include <stdio.h>
void searching(int a[], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]==value)
        {
            printf("%d is at index value %d\n",value,i );
        }
        
    }
    
    
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}
int main()
{
    int a[100], i, n, value;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &value);
    searching(a, n, value);
    display(a, n);

    return 0;
}