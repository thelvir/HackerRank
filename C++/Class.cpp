#include <iostream>
using namespace std;

class usaq
{
public:
    int age;
    string ad,familya;
    int reqem;
    void sayer()
    {
        cout << age<<endl;
        cout << familya << ", " << ad<<endl;
        cout << reqem << endl ;
        cout << "\n";
        cout <<age<<","<<ad<<","<<familya<<","<<reqem;
    }
    
};

int main()
{
    usaq Nazim;
    cin >> Nazim.age;
    cin >> Nazim.ad;
    cin >> Nazim.familya;
    cin >> Nazim.reqem;
    Nazim.sayer();
    
    return 0;
}
