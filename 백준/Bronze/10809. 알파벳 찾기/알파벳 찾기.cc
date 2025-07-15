#include <stdio.h>
int main()
{
    char c[100];
    char i;
    scanf("%s",c);
    int k;
    int count =0;
    for (i='a';i<='z';i++)
        {
            count = 0;
            for (k=0;k<100;k++)
            {
                if (c[k]=='\0')
                    break;
                if (c[k]==i)
                    {
                        printf("%d ",k);
                        count++;
                        break;
                    }
            }
            if (count==0)
                printf("-1 ");
        }
    return 0;
}   