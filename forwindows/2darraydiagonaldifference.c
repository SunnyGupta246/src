#include <stdio.h>
int main()
{
    int a[100][100],i,j,n,al=0,sum=0;
    scanf("%d",&n);
    for (  i = 0;i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }    
}

    for ( i = 0,j=0; i < n,j < n; i++,j++)
    {
        sum=sum+a[i][j];
        
    }

    for ( i = 0,j=n-1; i < n,j>=0; i++,j--)
    {
        al=al+a[i][j];
    }
    printf("%d\n",abs(sum-al));
    
    return 0;
}