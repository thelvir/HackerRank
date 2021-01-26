#include <stdio.h>
#include <stdlib.h>



int main() {
    long n,m,f,d,g,i,k=0,ar[100],j;
    scanf("%ld %ld",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&ar[i]);
        
        
          
    }
    
    for(i=0;i<n;i++)
    {
        g=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                
            
            g=ar[j]+ar[i];
            if(g%d==0)
            {
            k++;
            }
    }
        }
        
    }
    printf("%ld",k/2);
    return 0;
}
