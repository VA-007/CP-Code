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
    int n, k, d;
    cin >> n >> k >> d;

    int sum = 0;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    sum = accumulate(arr, arr + n, sum);

    if ((sum / k) >= d)
    {
      cout << d << endl;
    }
    else
    {
      cout << sum / k << endl;
    }
  }

  return 0;
}
