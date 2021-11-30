#include <stdio.h>
int binarysearch(int arr[],int  size,int  element)
{
 int low = 0; int high = size - 1;
 int mid;
    while (low <= high)
    {
         mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        if (element > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}


int main()
{
    int arr[] = {3, 4, 6, 7, 9, 14, 19, 22, 45, 67, 98, 114};
    int size = sizeof(arr) / sizeof(int);
    int element = 4;

    int searchindex=binarysearch(arr,size,element);
    printf("The element %d was found at index %d \n",element,searchindex);
     return 0;
}