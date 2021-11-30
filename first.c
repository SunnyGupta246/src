#include<stdio.h>
int main()
{
int n,i,j,t,k,h,g;
scanf("%d",&n);
t=n;
for(i=0;i<2*n-1;i++)
{
    for(j=0;j<2*n-1;j++)
    {
        if(i<n)
        {
            if(i==j)
            {
                for(k=j;k<2*n-i-1;k++)
                    printf("%d ",n-i);
                for(g=2*n-i-1;g<2*n-1;g++)
                    printf("%d ",++t);
                j=g;
            }
            else
                printf("%d ",t--);
        }
        else
        {
            for(h=0;h<2*n-i-1;h++)
                printf("%d ",t--);
            ++t;
            for(k=2*n-i-1;k<i+1;k++)
                printf("%d ",t);
            for(g=i+1;g<2*n-1;g++)
                printf("%d ",++t);
            j=g;
        }
    }
    t=n;
    printf("\n");
}
return 0;
}