#include <stdio.h>
#include <limits.h>
int main (void)
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    int a[n+1];
    int asum[n+1];
    int max=INT_MIN;
    asum[0]=0;
    int b[n-k+2];
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        asum[i]=asum[i-1]+a[i];
    }
    for (i=1;i<=(n-k+1);i++)
            b[i]=asum[i+k-1]-asum[i-1];
    for(i=1;i<=(n-k+1);i++)
        if (b[i]>=max)
            max=b[i];
    printf("%d",max);
    return 0;
    
}