#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    int sum = 0;
    int dist = 0;

    for (int i = 0; i < n; i++)
    {
      sum += arr[i];

      if (sum == 0)
      {
        break;
      }
      else
      {
        sum--;
        dist += arr[i];
      }
    }

    cout << dist << endl;
  }

  return 0;
}
