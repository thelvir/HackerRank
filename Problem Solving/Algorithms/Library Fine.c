#include<stdio.h>
int main()
{
    int d1,d2,m1,m2,y1,y2,fine;
    scanf("%d%d%d",&d1,&m1,&y1);
    scanf("%d%d%d",&d2,&m2,&y2);
    if(y1<y2)
    {
     fine=0;
    }
    else if(y1==y2&&m1<m2)
    {
        fine=0;
    }
    else if(y1==y2&&(m1==m2&&d1<=d2))
    {
        fine=0;
    }
    else if(m1==m2&&y1==y2)
    {
        fine=(d1-d2)*15;
    }
    else if(y1==y2)
    {
        fine=(m1-m2)*500;
    }
    else
    {
        fine=10000;
    }
    printf("%d",fine);
    return 0;
}
