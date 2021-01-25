#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long long a,b,c,d,e,n,sum=0;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
     scanf("%lld",&b);
     sum =sum+b;
    }
    printf("%lld",sum);

    return 0;
}
