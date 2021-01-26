#include <iostream>
using namespace std;

void plusMinus(int x)
{
    int arr[x+1];
    double p=0,m=0,z=0;
    for(int i=0;i<x;i++)
    {
        cin >> arr[i];    
        if(arr[i]>0)
            p++;
        if(arr[i]<0)
            m++;
        if(arr[i]==0)
            z++;        
    }
    cout << p/x << endl;
    cout << m/x << endl;
    cout << z/x << endl;
}

int main()
{
    int say;
    cin >> say;
    plusMinus(say);
    return 0;
}
