#include <stdio.h>
int main ()
{
    double a;
    double i;
    double total;
    scanf("%lf",&a);
    scanf("%lf",&i);
    total = a/i;
    printf("%.16lf",total);
    return 0;
}