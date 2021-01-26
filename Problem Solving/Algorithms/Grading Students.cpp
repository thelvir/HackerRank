#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,arr[10000],b,c;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        c=round(((arr[i] + 4)/5) * 5);
        if(arr[i]>=38)
        {
            if(c-arr[i]<3)
                arr[i] = round(((arr[i] + 4)/5) * 5);
        }
    }
    for(int i=0;i<n;i++)
        cout << arr[i] << endl;
    return 0;
}
