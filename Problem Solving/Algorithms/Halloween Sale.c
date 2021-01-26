#include <stdio.h>
#include <stdlib.h>

int main() { 
int gamecount=0,p,d,m,s,i,sum=0;

scanf("%d%d%d%d",&p,&d,&m,&s);


while(sum+p<=s)
{
    gamecount +=1;
    sum = sum+p;
    if(p-d>m)
    {
        p = p-d;
    }
    else
    p = m;
}
printf("%d",gamecount);
return 0; 
}
    
