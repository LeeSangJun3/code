#include <stdio.h>
int main (void)
{
    char c[51];
    double hak;
    char g[3];
    int i;
    double score;
    double sum=0;
    double total = 0;
    double avg;
    for (i=0;i<20;i++)
        {
            scanf("%s %lf %s",c,&hak,g);
            if (g[0]=='A'&&g[1]=='+')
            {
                score = 4.5;
                sum=sum+hak;
                total = total + hak*score;
            }
            else if (g[0]=='A'&&g[1]=='0')
            {
                score = 4.0;
                sum=sum+hak;
                total = total + hak*score;
            }
            else if (g[0]=='B'&&g[1]=='+')
            {
                score = 3.5;
                sum=sum+hak;
                total = total + hak*score;
            }
            else if (g[0]=='B'&&g[1]=='0')
            {
                score = 3.0;
                sum=sum+hak;
                total = total + hak*score;
            }
            else if (g[0]=='C'&&g[1]=='+')
            {
                score = 2.5;
                sum=sum+hak;
                total = total + hak*score;
            }
            else if (g[0]=='C'&&g[1]=='0')
            {
                score = 2.0;
                sum=sum+hak;
                total = total + hak*score;
            }
            else if (g[0]=='D'&&g[1]=='+')
            {
                score = 1.5;
                sum=sum+hak;
                total = total + hak*score;
            }
            else if (g[0]=='D'&&g[1]=='0')
            {
                score = 1.0;
                sum=sum+hak;
                total = total + hak*score;
            }
            else if (g[0]=='F')
            {
                score = 0.0;
                sum=sum+hak;
                total = total + hak*score;
            }
            
 
        }
    
    printf("%lf",total/sum);
    return 0;
}