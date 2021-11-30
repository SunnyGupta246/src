#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int* arrptr=arr;
    printf("Adress of first element of a is %d\n",arr);
    printf("Adress of first element of a is %d\n",&arr[0]);
    printf("%d\n",*arr);
    printf("%d\n",*(&arr[0]));
    printf("%d\n",arr+1);
    printf("%d\n",*(arr+1));
    arrptr++;
    printf("%d\n",arrptr[0]);
    printf("%d\n",*(arrptr+1));

    return 0;

} 
