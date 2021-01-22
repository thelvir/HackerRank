#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a,b,c,d,e=0,f,i;
   int arr[1000];
   scanf("%d",&a);
   for(i=0;i<a;i++)
   {
       scanf("%d",&arr[i]);
       e=e+arr[i];
   }
   printf("%d",e);

    return 0;
}
