#include <stdio.h>
int main(void)
{
    int k;
    scanf ("%d",&k);
    int x;
    scanf("%d",&x);
    int a[x];
    int b[x];
    int i=0;
    int n=0;
    int sum=0;
    for (i=0;i<x;i++)
        {
            scanf("%d",&a[i]);
            scanf("%d",&b[i]);
            sum=sum+a[i]*b[i];
        }
    if (sum == k)
        printf("Yes");
    else
        printf("No");
    return 0;  
}