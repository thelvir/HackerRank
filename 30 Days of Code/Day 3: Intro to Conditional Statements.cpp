#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2!=0)
    cout<<"Weird"<<endl;
    else if(n%2==0 && n>2 && n<5)
    cout << "Not Weird"<<endl;
    else if(n%2==0 && n>6 &&n<=20)
    cout<<"Weird"<<endl;
    else if (n%2==0 && n>20)
    cout << "Not Weird";
   
    return 0;
}
