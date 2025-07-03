#include <stdio.h>
int main(void)
{
    int n;
    int m;
    int i,j,k;
    scanf("%d",&n);
    scanf("%d",&m);
    int x,y;
    int a[n];
    int b[m];
    int c[m];
    int d[m];
    for(x=0;x<n;x++)
        a[x]=0;
    for(x=0;x<m;x++)
        {
            scanf("%d %d %d",&b[x],&c[x],&d[x]);
        }
    for(y=0;y<m;y++)
        { for (x=b[y];x<=c[y];x++)
            a[x-1]=d[y];
        }
    for(x=0;x<n;x++)
        printf("%d ",a[x]);
}