#include <stdio.h>

void functiom(int a,int b,int c,int d)
{
    if (a>b && a>c && a>d)
    printf("%d",a);
    else if(b>a && b>c && b>d)
    printf("%d",b);
    else if(c>a && c>b && c>d)
    printf("%d",c);
    else if (d>a && d>b && d>c)
    printf("%d",d);
}
int main()
{
    int q,w,e,r;
    scanf("%d %d %d %d",&q,&w,&e,&r);
    functiom(q,w,e,r);
   

    return 0;
}
