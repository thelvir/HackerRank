#include <stdio.h>
#include <stdlib.h>



int main() {
    int n,i,j;
scanf("%d",&n);
int a[n][n];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%1d",&a[i][j]);
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if( (i>=1)&&(i<n-1) && (j>=1)&&(j<n-1) )
        {
         if( (a[i][j] > a[i-1][j]) && (a[i][j] > a[i][j+1])      
         && (a[i][j] > a[i+1][j]) && (a[i][j] > a[i][j-1]) )
            printf("X");
         else
            printf("%d",a[i][j]);
        }
        else
            printf("%d",a[i][j]);
    }
    printf("\n");
}
    return 0;
}
