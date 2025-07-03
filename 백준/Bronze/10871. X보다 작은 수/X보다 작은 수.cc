#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    int c;
    scanf("%d",&c);
    int b[a];
    int n;
    int d=0;
    for (n=0;n<a;n++)
        {
            scanf("%d",&b[n]);
            if (b[n]<c)
                printf("%d ",b[n]);
        }
    return 0;
}
