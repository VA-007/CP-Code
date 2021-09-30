#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long
#define MOD 1000000007

using namespace std;

bool isPossible(vector<ll> arr, ll mid, ll c)
{
  ll cows = 1, last = arr[0];

  for (ll i = 1; i < arr.size(); i++)
  {
    if (arr[i] - last >= mid)
    {
      last = arr[i];
      cows++;
    }
  }

  return cows >= c;
}

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin >> t;

  while (t--)
  {
    ll n, c;
    cin >> n >> c;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
      cin >> arr[i];

    sort(arr.begin(), arr.end());

    ll low = arr[0], high = arr[n - 1] - arr[0], mid, res = -1;

    while (low <= high)
    {
      mid = low + (high - low) / 2;

      if (isPossible(arr, mid, c))
      {
        res = mid;
        low = mid + 1;
      }
      else
        high = mid - 1;
    }

    cout << res << endl;
  }

  return 0;
}