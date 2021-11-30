#include <stdio.h>
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 11, 53, 33};
    int size = sizeof(arr) / sizeof(int);
    int element = 53;
    int searchindex = linearsearch(arr, size, element);
    printf("The element %d found at a index %d\n", element, searchindex);

    return 0;
}