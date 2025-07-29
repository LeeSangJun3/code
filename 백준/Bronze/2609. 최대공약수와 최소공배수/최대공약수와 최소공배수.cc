#include <stdio.h>
int main ()
{
    int n,m,max,min,i;
    scanf("%d%d",&n,&m);
    if (n>=m)
    {
        max=n;
        min=m;
    }
    else
    {
        max=m;
        min=n;
    }
    int y,b;
    y=1;
    b=1;
    for (i=2;i<=min;i++)
        {
            if (max%i==0 && min %i ==0)
            {
                max=max/i;
                min=min/i;
                y=y*i;
                i=1;
            }
        }
    printf("%d\n",y);
    b=y*max*min;
    printf("%d\n",b);
}