#include <stdio.h>
int main()
{
    int a[10],i;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter the input for index %d:\n",i);
        scanf("%d",&a[i]);
    }
    printf("Array elemets are as follow: \n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d",a[i]);
    }
    
    
    return 0;
}