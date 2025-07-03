#include <stdio.h>
int main(void)
{
    int a;
    int b;
    while (1)
        {
            scanf("%d",&a);
            scanf("%d",&b);
            if (a==0 and b==0)
                break;
            printf("%d\n",a+b);
        }
    return 0;
}