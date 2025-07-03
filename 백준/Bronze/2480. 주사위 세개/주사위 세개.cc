#include <stdio.h>
int main(void)
{
    int a,b,c,max;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a==b and b==c)
        printf("%d",10000+a*1000); 
    else if (a==b and b!=c)
        printf("%d",1000+b*100);
    else if (b==c and a!=c)
        printf("%d",1000+b*100);
    else if (a==c and b!=c)
        printf("%d",1000+a*100);
    else
    {
        if (a>b and a>c)
            max=a;
        else if (b>c and b>a)
            max=b;
        else if (c>a and c>b)
            max=c;
        printf("%d",max*100);
    }

    return 0;  
}