#include <stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    if (s==1)
    {
        printf("Saurav sunny ka beta hai \n");
    }
    else if(s>1 && s<100)
    {
        printf("Shivam sunny ka beta hai \n");
    }
    else
    {
    printf("Surav shivam dono sunny ke bate hai \n");
    }
    return 0;
}