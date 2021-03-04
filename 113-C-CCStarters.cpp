#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long

using namespace std;

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t = 0;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    // all possitive
    if (arr[0] >= 0)
    {
      cout << (arr[n - 1] * arr[n - 2]) + (arr[n - 1] - arr[n - 2]) << endl;
      continue;
    }

    // all negative
    if (arr[n - 1] < 0)
    {
      cout << (arr[0] * arr[1]) + (arr[1] - arr[0]) << endl;
      continue;
    }

    // mixture
    if (((arr[0] * arr[1]) + (arr[1] - arr[0])) > ((arr[n - 1] * arr[n - 2])) + (arr[n - 1] - arr[n - 2]))
    {
      cout << (arr[0] * arr[1]) + (arr[1] - arr[0]) << endl;
      continue;
    }
    else
    {
      cout << (arr[n - 1] * arr[n - 2]) + (arr[n - 1] - arr[n - 2]) << endl;
      continue;
    }
  }

  return 0;
}

// 1
// 10
// -30 -21 -10 0 8 10 17 24 28 30