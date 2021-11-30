#include<stdio.h>
int main()
{
    printf("Lets learn about pointer\n");
    int a=6;
    int *ptra=&a;
    printf("%d\n",a);
    printf("%d\n",ptra);
    printf("%d\n",&a);
    printf("%d\n",*ptra);
    printf("%d\n",&ptra);    
    printf("%d\n",*(&ptra));
    printf("%d\n",ptra+1);


}