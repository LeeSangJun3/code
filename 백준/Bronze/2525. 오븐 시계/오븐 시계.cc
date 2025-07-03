#include <stdio.h>
int main(void)
{
    int a,b,c,sum,d,e;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a==0)
        a=24;
    sum=60*a+b+c;
    d=sum/60;
    if (d>=24)
        d=d-24;
    e=sum%60;
    printf("%d %d",d,e);
    return 0;  
}