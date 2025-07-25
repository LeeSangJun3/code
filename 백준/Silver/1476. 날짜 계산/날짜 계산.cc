#include <stdio.h>
int main()
{
    int a,b,c;
    int i;
    int d;
    d=1;
    scanf("%d %d %d",&a,&b,&c);
    if (a==15)
        a=0;
    if (b==28)
        b=0;
    if (c==19)
        c=0;
    for (i=1;;i++)
        {
            if (i%15 ==a && i%28==b && i%19==c)
            {
                printf("%d",i);
                break;
            }
        }
    return 0;
}