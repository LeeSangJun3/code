#include <stdio.h>
int main (void)
{
    long long n;
    long long m;
    scanf("%lld %lld\n",&n,&m);
    long long a[n+1]={0};
    long long asum[n+1]={0};
    long long b[n+1]={0};
    long long c[m]={0};
    long long  i,j;
    long long sum=0;
    for (i=1;i<n+1;i++)
        {
            scanf("%lld ",&a[i]);
            asum[i]=asum[i-1]+a[i];
            b[i] = asum[i]%m;
        }
    for (i=0;i<m;i++)
        {
            int count=0;
            for (j=0;j<n+1;j++)
                if (b[j]==i)
                    count++;
            c[i]=count;
        }
    for (i=0;i<m;i++)
        sum =sum + c[i]*(c[i]-1)/2;

    printf("%lld",sum);
    return 0;
}