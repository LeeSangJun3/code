#include <stdio.h>
int main (void)
{
    int a,b,c,d;
    scanf ("%d %d %d %d",&a,&b,&c,&d);
    if (c==a)
    {
        if(b<=0)
            printf("1");
        else
            printf("0");
    }
    else if (c>a)
    {
        
        if (d>=(b/(c-a)))
            printf("1");
        else
            printf("0");
    }
    else
            printf ("0");

            
    return 0;
}