#include <stdio.h>
int main (void)
{
    int a,b,c,d;
    scanf("%d %d\n",&a,&b);
    scanf("%d %d\n",&c,&d);
    int m,j;
    int max,min;
    m= b*d;
    j= ((a*d) + (b*c));
    if (m>=j)
    {
        max=m;
        min=j;
    }
    else
    {
        max=j;
        min=m;
    }
    int k;
    int ans =1;
    for (k=2;k<=min;k++)
                {
                    if (min%k==0 && max%k==0)
                    {
                        max=max/k;
                        m=m/k;
                        min=min/k;
                        j=j/k;
                        k = 1;
                    }
                }
    printf("%d %d\n",j,m);
}
    
    