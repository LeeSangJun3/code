#include <stdio.h>
int main (void)
{
    char s[200002];
    int q;
    char a;
    int l,r;
    scanf("%s",s);
    scanf("%d",&q);
    int i,k;
    int count;
    for (k=0;k<q;k++)
        {
            count =0;
            scanf (" %c %d %d",&a,&l,&r);
                for (i=l;i<=r;i++)
                    {
                        if (s[i]==a)
                            count++;               
                    }
            printf("%d\n",count);
        }
    return 0;        
}