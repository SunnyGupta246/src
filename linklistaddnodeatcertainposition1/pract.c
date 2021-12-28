#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter the number \n");
    scanf("%d", &n);


        for (int i = 1; i <= n; i++)
        {

            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("Number is prime \n");
        }
        else
        {
            printf("Number is not prime \n");
        }
    

    return 0;
}