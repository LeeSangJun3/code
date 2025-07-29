#include <stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    char n[51];
    int i,j;
    for (i=0;i<t;i++)
        {
            int count1=0;
            int count2=0;
            int x=0;
            scanf("%s",n);
            for (j=0;n[j]!='\0';j++)
                {
                    if (n[j]=='(')
                        count1++;
                    if (count1==count2 && n[j]==')')
                    {
                        printf("NO\n");
                        x++;
                        break;
                    }
                    if (n[j]==')')
                        count2++;
                }      
            if (x==0 && count1==count2)
                printf("YES\n");
            else if (x==0)
                printf("NO\n");
            
        }
    return 0;
}