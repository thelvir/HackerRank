#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int a,b,c,d,e,f,g,r,h,j;
    scanf("%d",&a);
    b=a/10000%10;
    d=a/1000%10;
    e=a/100%10;
    f=a/10%10;
    g=a%10;
    r=b+d+e+f+g;
    printf("%d",r);
    return 0;
}
