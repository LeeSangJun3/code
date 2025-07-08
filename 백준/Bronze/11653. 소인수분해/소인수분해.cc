#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int temp;
    int i;
    int x;
    int k;
    x=n;
    int count=0;
    if (n==1)
        printf("\n");
    for (i=2;i<n+1;i++)
    {
        k=n%i;
        if(k==0)
        {
            count++;
            n=n/i;
            printf("%d\n",i);
            i=1;
        }
    }
    return 0;
}
 