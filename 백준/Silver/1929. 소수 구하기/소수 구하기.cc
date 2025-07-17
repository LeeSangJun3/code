#include <stdio.h>
#include <math.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int i,k;
    int count;
    float root;
    for (i=m;i<=n;i++)
        {
            root=sqrt(i);
            count=0;
            if (i==1)
                count++;
            for(k=1;k<=root;k++)
                {
                    if(i%k==0)
                        count ++;                        
                }
            if (count==1)
                printf("%d\n",i);
        }
    return 0; 
}