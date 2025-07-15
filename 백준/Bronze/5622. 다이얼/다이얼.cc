#include <stdio.h>
int main()
{
    char a[15]={0};
    int sum=0;
    int i;
    scanf("%s",a);
    for (i=0;i<15;i++)
        {
            if (a[i] == '\0')
                break;
            else if ('A'<=a[i]&&a[i]<='C')
                sum=sum+3;
            else if ('D'<=a[i]&&a[i]<='F')
                sum=sum+4;
            else if ('G'<=a[i]&&a[i]<='I')
                sum=sum+5;
            else if ('J'<=a[i]&&a[i]<='L')
                sum=sum+6;
            else if ('M'<=a[i]&&a[i]<='O')
                sum=sum+7;
            else if ('P'<=a[i]&&a[i]<='S')
                sum=sum+8;
            else if ('T'<=a[i]&&a[i]<='V')
                sum=sum+9;
            else if ('W'<=a[i]&&a[i]<='Z')
                sum=sum+10;  
        }
    printf("%d",sum);
    return 0;
}