#include <stdio.h>
int main ()
{
    int f[21]={0};
    int k;
    int i;
    f[0]=0;
    f[1]=1;
    for (i=2;i<=20;i++)
        f[i]=f[i-1]+f[i-2];
    scanf("%d",&k);
    printf("%d",f[k]);
}