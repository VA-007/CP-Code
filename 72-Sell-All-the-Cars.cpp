#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define int long long

using namespace std;

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

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

    sort(arr, arr + n, greater<int>());

    int profit = 0;
    for (int i = 0; i < n; i++)
    {
      arr[i] -= i;
      if (arr[i] > 0)
      {
        profit += arr[i];
      }
    }

    cout << profit % 1000000007 << endl;
  }

  return 0;
}
