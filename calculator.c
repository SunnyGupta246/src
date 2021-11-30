#include <stdio.h>
int main()
{
    int num1, num2, add, sub, div, mod;
    printf("Enter the two number \n");
    scanf("%d %d", &num1, &num2);
    add = num1 + num2;
    sub = num1 - num2;
    div = num1 / num2;
    mod = num1 % num2;
    printf("addition of two number is :%d\n", num1 + num2);
    printf("Substraction of two number is:%d \n", num1 - num2);
    printf("Division of two numbr is:%d \n", num1 / num2);
    printf("modulus of two number is:%d \n", num1 % num2);

    return 0;
}