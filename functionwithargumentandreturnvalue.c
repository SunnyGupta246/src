#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b, c;
    printf("Enter the value of a b\n");
    scanf("%d%d",&a,&b);
    c = sum(a, b);
    printf("The sum is %d\n", c);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}