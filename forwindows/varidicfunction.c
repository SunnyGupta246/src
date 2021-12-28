#include <stdio.h>
#include <stdarg.h>

int getsum(int number,...)
{
    va_list list;
    int sum=0;
    va_start(list,number);

    for (int i = 0; i < number; i++)
    {
        int n= va_arg(list,int);
        sum=sum+n;
    }
    va_end(list);
    return sum;
}
int main()
{
    printf("Sum of 2 numbers is %d\n",getsum(2,12,2));
    return 0;
}