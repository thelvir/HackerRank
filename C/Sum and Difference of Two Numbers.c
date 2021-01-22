#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,c,i;
    float f,g,d,e,r;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&f,&g);
    c=a+b;
   i=a-b;
 e=f+g;
 r=f-g;
    printf("%d %d\n",c,i);
    printf("%.1f %.1f",e,r);
    
    return 0;
}
