#include <stdio.h>
int main(void)
{
    int a[10];
    int b[10];
    int i;
    int k=10;
    int n,m;
    for (i=0;i<10;i++)
        scanf("%d\n",&a[i]);
    for (i=0;i<10;i++)
        b[i]=a[i]%42;
    for (n=0;n<9;n++)
        {
            for(m=n+1;m<10;m++)
                    if(b[n]==b[m])
                    {
                        k--;
                        break;
                    }
        }
    printf("%d",k);
}