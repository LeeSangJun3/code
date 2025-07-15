#include <stdio.h>
int main()
{
    int a,i,k,n,j,x;
    scanf("%d",&n);
    for (i=1;i<=(2*n-1);i++)
        {
            if (i<=n)
            {
                for (k=i;k<n;k++)
                    printf(" ");
                for (j=1;j<=2*i-1;j++)
                    printf("*");
            }
            if (i>n)
            {
                for (k=i-n;k>0;k--)
                    printf(" ");
                for (x=1;x<=(4*n-2*i-1);x++)
                    printf("*");
            }
            printf("\n");
        }
}