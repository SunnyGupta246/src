#include <stdio.h>
void minmax(int arr[],int len,int *min,int *max)
{
    *min=*max=arr[0];
    int i;
    for ( i = 0; i < len-1; i++)
    {
        if (arr[i]> *max)
        {
            *max=arr[i];
        }
        if (arr[i]<*min)
        {
            *min=arr[i];
        }
        
        
    }
    
}
int main()
{
    int a[]={23,11,4,4,566,77,88,99,45};
    int min,max;
    int len=sizeof(a)/sizeof(a[0]);
    minmax(a,len,&min,&max);
    printf("Minimum value in array is :%d Maximum value in array is :%d\n",min,max);
    return 0;
}