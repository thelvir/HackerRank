#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<unsigned long int> arr(5);
    unsigned long int minValue = ULONG_MAX;
    unsigned long int maxValue = 0;
    unsigned long int allSum = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
        allSum += arr[arr_i];
        minValue = min(minValue,arr[arr_i]);
        maxValue = max(maxValue,arr[arr_i]);
    }
    
    cout<<allSum - maxValue<<" "<<allSum - minValue<<endl;
    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
    long long max=-100000000000001,min=10000000000000001,sum=0,i,a;
    long long arr[5];
    for(i=0;i<5;i++)
    {
        cin >> arr[i];
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
        sum = sum+arr[i];
    }
    cout << sum-max << " "<<sum-min;
    return 0;
}
*/
