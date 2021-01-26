#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    long int arra[2000],n,i,j,haa=0,great=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++){
        scanf("%ld", &arra[i]);
    }
    //=========================================  
    great=arra[0];
    for(i=0;i<n;i++){
        for(j=1;j<n+1;j++){
           if(great<arra[j])
           {   
               great=arra[j];
               haa=haa+1;
           }
        }    
        }
    printf("%ld", haa);
    //=========================================
     haa=0; 
     great=arra[0];
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(great>arra[j])
           {   
               great=arra[j];
               haa=haa+1;
            }
        }
        }
    printf("% ld", haa);
    return 0;
}
