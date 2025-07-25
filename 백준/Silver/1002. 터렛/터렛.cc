#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    int x1,x2,y1,y2,r1,r2,i,dis;
    int rsum,max,min;
    int count;
    for (i=0;i<t;i++)
        {
            scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
            dis = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
            rsum = r1*r1+r2*r2;
            if (r1>r2)
            {
                max=r1;
                min=r2;
            }
            else
            {
                max=r2;
                min=r1;
            }
            if (dis == 0 && r2==r1)
                count = -1;
            else if (dis == 0 && r2!=r1)
                count= 0;
            else if (max*max < dis)
            {
                if ((max+min)*(max+min)<dis)
                    count = 0;
                else if ((max+min)*(max+min) >dis)
                    count = 2;
                else
                    count = 1;
            }
            else if (max*max>dis)
            {
                if(dis<(max-min)*(max-min))
                    count = 0;
                else if (dis>(max-min)*(max-min))
                    count = 2;
                else
                    count = 1;
            }
            else
                count = 2;
             printf("%d\n",count);
        }
    return 0;          
}