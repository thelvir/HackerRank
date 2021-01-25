#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a,b,c;
    string temp= " ";
    cin >> a >> b;
    c=a+b;
    cout << a.length() << " " << b.length() << endl;
    cout << c << endl;
    temp[0]=a[0];
    a[0]=temp[0];
    a[0]=b[0];
    b[0]=temp[0];
    cout << a << " " << b;
    
    return 0;
}
