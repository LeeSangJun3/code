#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    int m;
    scanf("%d",&m);
    int i[m];
    int j[m];
    int k, temp;
    int z,q;
    for (k=0;k<n;k++)
        a[k]=k+1;
    for (k=0;k<m;k++)
        {
            scanf("%d %d",&i[k],&j[k]);
        }
    for(k=0;k<m;k++)
        {
            for (z=i[k],q=j[k];z<q;z++,q--)
                {
                    temp=a[z-1];
                    a[z-1]=a[q-1];
                    a[q-1]=temp;
                }
        }
    for (k=0;k<n;k++)
        printf("%d ",a[k]);  
}
