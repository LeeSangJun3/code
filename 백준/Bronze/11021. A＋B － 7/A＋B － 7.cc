#include <stdio.h>
int main(void)
{
    int k;
    scanf ("%d",&k);
    int a[k];
    int b[k];
    int i=0;
    int n=0;
    int sum[i];
    for (i=0;i<k;i++)
        {
            scanf("%d",&a[i]);
            scanf("%d",&b[i]);
            sum[i]=a[i]+b[i];
            printf("Case #%d: %d\n",i+1,sum[i]);
        }
    return 0;
}