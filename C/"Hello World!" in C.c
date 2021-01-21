#include <stdio.h>
#include <string.h>
#include <sys/types.h>

int main() 
{
   char array[100];
   gets(array);
   printf("Hello, World!\n");
   printf("%s", array);
	
      
    return 0;
}
