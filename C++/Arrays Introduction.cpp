#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, i = 0;
  cin >> n;
  int a[n];
  for (; i < n; i++)
    cin >> a[i];
  for (; i >0; i--)
    cout << a[i- 1] <<" ";
  return 0;
}
