#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,j,array[1000];
    int reverse[1000],temp;
    cin >> a;
    for(i=0;i<a;i++)
    {
        cin >> array[i];
    }
    for(i=a-1;i>=0;i--)
    {
        cout << array[i] << " ";
    }
    return 0;
}
