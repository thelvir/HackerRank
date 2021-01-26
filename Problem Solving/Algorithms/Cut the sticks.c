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
    int n, len; 
    scanf("%d",&n);
    int *arr = (int*)calloc(1001, sizeof(int));
    int min = 0, max = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
        scanf("%d",&len);
        if(!min || min > len) 
            min = len;
        if(max < len)
            max = len;
        arr[len]++;
    }
    for(int i = min; i <= max; i++) {
        if(arr[i]) {
            printf("%d\n", n);
            n -= arr[i];
        }
    }
    return 0;
}

    
