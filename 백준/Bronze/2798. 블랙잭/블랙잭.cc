#include <stdio.h>
int main (void)
{
    int n;
    int m;
    scanf("%d %d\n",&n,&m);
    int a[n+1];
    a[0]=0;
    int i,k,j;
    int max = 300000;
    for (i=1;i<=n;i++)
        scanf("%d",&a[i]);
    int sum, answer; 
    for (i=1;i<=n-2;i++)
        {
            for(j=i+1;j<=n-1;j++)
            {
                for (k=j+1;k<=n;k++)
                    {
                        sum= a[i]+a[j]+a[k];
                        if ((sum<=m) && ((m-sum)<=max))
                        {
                            max = (m-sum);
                            answer = sum;
                        }
                    }
            }
        }
    printf("%d",answer);
    return 0;
}