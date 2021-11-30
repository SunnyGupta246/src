#include <stdio.h>
int main()
{
    int arr[50],size,pos,num;

    printf("Enter the size of array");
    scanf("%d",&size);

    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the pos to delete the element \n");
    scanf("%d",&pos);
    for ( int i = 0; i >=pos ; i++)
    {
        arr[pos]=arr[pos+i+1];
        pos++;
    }
    size--;

    for (int i = 0; i < size; i++)
    {
        printf("element is%d\n",arr[i]);
    }
    
    
    return 0;
}