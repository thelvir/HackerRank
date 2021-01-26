#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
    long n,m,f,d,g,k;
    scanf("%ld",&n);
    for(m=1;m<=n;m++)
    {
        scanf("%ld",&d);
        k=d;
        g=0;
        while(d!=0)
        {
            f=d%10;
            d/=10;
            if(f!=0)
            {
                if(k%f==0)
            {
                g++;
            }
            }
            
            
        }
        printf("%ld\n",g);
    }
    return 0;
}
