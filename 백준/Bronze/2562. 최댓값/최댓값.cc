#include <stdio.h>
int main(void)
{
    int a[9];
    int i;
    for (i=0;i<9;i++)
        scanf("%d",&a[i]);
    int maxv=0;
    int maxw;
    for (i=0;i<9;i++)
        {
            if(a[i]>maxv)
            {
                maxv=a[i];
                maxw=i+1;
            }
        }
    printf("%d\n%d",maxv,maxw);
}
