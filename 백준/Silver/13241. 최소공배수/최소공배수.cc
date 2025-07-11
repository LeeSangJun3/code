#include <stdio.h>
int main (void)
{

    long long int a;
    long long int b;
    long long int min,max;
    long long int i;
    long long int ans;
    long long int count;
    long long int k;
    ans = 1;
    k = 2;
    count = 0;
    scanf("%lld %lld",&a,&b);
            if (a>=b)
            {
                max=a;
                min=b;
            }
            else if (b>a)
            {
                max=b;
                min=a;
            }
            for (k=2;k<=min;k++)
                {
                    if (min%k==0 && max%k==0)
                    {
                        max=max/k;
                        min=min/k;
                        ans=ans*k;
                        k = 1;
                        count++;
                    }
                }
            if (k>min)
            {
                if(count==0)
                    printf("%lld\n",(max*min));
                if (count!=0)
                    printf("%lld\n",ans*max*min);
            }

            
        
    return 0;
}