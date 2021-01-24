#include <iostream>
using namespace std;
void toplama(int *pa2,int *pb2)
{
    cout << *pa2+*pb2<< endl;    
}
void cixma(int *pa2,int *pb2)
{
    if(*pa2>*pb2)
    cout << *pa2-*pb2 <<endl;    
    else 
    cout << *pb2-*pa2 <<endl;        
}
int main()
{
    int a,b,c,d;
    int *pa,*pb;
    pa=&a;
    pb=&b;
    cin >> a >> b;
    toplama(pa,pb);
    cixma(pa,pb);
    return 0;
}
