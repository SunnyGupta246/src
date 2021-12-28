#include <stdio.h>
int fabonicci(int n )
{
    int fabonicci[n],r,i=2;
    fabonicci[0]=0, fabonicci[1]=1;
    for (i = 2; i <= n; i++)
    {
        fabonicci[i]=fabonicci[i-1]+fabonicci[i-2];
    }
        r= fabonicci[n];
        return r;
    
}
int main()
{
    int r,n;
    scanf("%d",&n);
    r =fabonicci(n);
    printf("%d",r); 
    return 0;
}