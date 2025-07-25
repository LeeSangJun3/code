#include <stdio.h>
int main()
{
    int c;
    int i,j,n,sum;
    double avg;
    double rate;
    scanf("%d",&c);
    int count;
    for (i=0;i<c;i++)
        {
            count=0;
            scanf("%d",&n);
            int a[n]={0};
            sum=0;
            for(j=0;j<n;j++)
                {
                    scanf("%d",&a[j]);
                    sum=sum+a[j];
                }
            avg = sum*1.0/n;
            for (j=0;j<n;j++)
                {
                    if (a[j]>avg)
                        count++;
                }
            rate = 100.0*count/n;
            printf("%.3lf%%\n",rate);
        }
    
    return 0;          
}