#include <stdio.h>
int main()
{
    char a[100]={0};
    int count=0;
    int i;
    scanf("%s",a);
    for(i=0;i<100;i++)
        {
            if(a[i]!=('\0'))
                count++;
            else
                break;
        }
    printf("%d",count);
}   