#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d",&a);
    int b[a];
    int n;
    int max=-10000000;
    int min=10000000;
    
    for (n=0;n<a;n++)
            scanf("%d",&b[n]);
    for (n=0;n<a;n++)
        {
            if(b[n]>max)
                max=b[n];
            if(b[n]<min)
                min=b[n];
        }
    printf("%d %d",min,max);
    return 0;
}
