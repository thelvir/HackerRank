#include <stdio.h>
#include <stdlib.h>



int getNumber(int n, int m, int s) {
    int g;
 g=(s + m - 1) % n;
 if(g==0)
 {
         return n;
     }
     else{
             return g;
     }    
}
int main(int argc, char *argv[]) {
    int a,b,c,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      scanf("%d%d%d",&a,&b,&c);
      printf("%d\n",getNumber(a,b,c));    
    }
    
    return 0;
}
