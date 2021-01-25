#include <iostream>
using namespace std;
int factorial()
{
    int f,g=1;
    cin>>f;
  
   for(int i=f;i>0;i--)
    {
        g=g*i;
    }
    
    return g;
}

int main()
{
    
    cout<< factorial();
    return 0;
}
