#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int n, ans = 0;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  sort(arr, arr + n);

  vector<int> vec;
  for (int i = 0; i < n; i += 4)
  {
    for (int j = i; j < i + 4; j++)
    {
      vec.push_back(arr[j]);
      if (j == i+2)
      {
        ans += arr[j];
        break;
      }
    }
  }

  cout << ans;

  return 0;
}

n = 7

Alpha 
Alpha 
Alpha 
Alpha 
Omega
Omega
Delta

numbers [0] = 4
numbers [1] = 2
numbers [2] = 1

counter [0] = 3
counter [1] = 5
counter [2] = 6
