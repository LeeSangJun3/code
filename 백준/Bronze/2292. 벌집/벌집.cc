#include <stdio.h>
int main ()
{
    long n;
    scanf("%ld",&n);
    long a;
    long k;
    for (a=1;a<=n;a++)
        {
            if (n==1)
                printf("%ld",n);
            else if ((n > (3*a*(a-1)+1)) && ((n<= 3*(a+1)*a +1)))
            {
                k=a+1;
                printf("%ld",k);
                break;
            }
        }
    return 0;
}