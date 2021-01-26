#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k, p, page = 1, special = 0;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++) {
        scanf("%d", &p);
        for(int j = 1; j <= p; j++) {
            if(j == page) 
                special++;
            if(j == p || !(j % k))
                page++;
        }
    }
    printf("%d", special);
    
    return 0;
}
