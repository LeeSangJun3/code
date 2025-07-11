#include <stdio.h>
#include <math.h>

int main(void)
{
    long long int n;
    scanf("%lld", &n);
    long long int a[n];
    long long int i;
    int count;
    long long int k;
    long long int z;
    long double result;

    for (i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    for (i = 0; i < n; i++) {
        for (z = a[i]; ; z++) {
            if (z < 2) {
                printf("2\n");
                break;
            }

            result = sqrt(z);
            count = 0;
            for (k = 2; k <= result; k++) {
                if (z % k == 0) {
                    count++;
                    break;
                }
            }
            if (count == 0) {
                printf("%lld\n", z);
                break;
            }
        }
    }
    return 0;
}