#include<stdio.h>

int factorial(int number )
{
    if (number==0 || number==1 )
    {
        return 0;
    }
    else
    {
        return number*factorial(number-1);
    }
}
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("factorial of %d is %d\n",n,factorial(n));
}