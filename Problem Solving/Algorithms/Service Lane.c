#include<stdio.h>
int main(void){
    int n, t, start, end;
    scanf("%d %d", &n, &t);
    int A[n];
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    for(int i=0; i<t; i++){
        scanf("%d %d", &start, &end);
        int min=A[start];
        for(int j=start; j<=end; j++){
            if(A[j]<min) min=A[j];
        }
        printf("%d\n", min);
    }
    return 0;
}
