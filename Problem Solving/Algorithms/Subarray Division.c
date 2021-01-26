#include <stdio.h>
#include <stdlib.h>



int main() {
    long n,m,f,d,g,i,k=0,ar[100],j;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&ar[i]);
        
        
          
    }
    scanf("%ld %ld",&d,&m);
    for(i=0;i<n-m+1;i++)
    {
        g=0;
        for(j=0;j<m;j++)
        {
            g=g+ar[j+i];
        }
        if(g==d)
        {
            k++;
        }
    }
    printf("%ld",k);
    return 0;
}
