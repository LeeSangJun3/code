#include <stdio.h>
int main (void)
{
    int n;
    scanf("%d",&n);
    int i,k;
    int max=n;
    int count =0;
    for (i=0;i<=((n/5)+1);i++)
        {
            for (k=0;k<=((n/3)+1);k++)
                if((5*i+3*k) == n)
                {
                    count ++;
                    if(i+k<=max)
                        max=i+k;
                }
        }
    if (count == 0)
        printf("-1");
    else
        printf("%d",max);
    return 0;
}