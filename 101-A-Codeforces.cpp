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

  ll t;
  cin >> t;

  while (t--)
  {
    ll count = 0;
    float sum = 0, n = 0;
    cin >> n;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
      sum += arr[i];
      if (arr[i] == 0)
      {
        count++;
      }
    }

    if (sum < (n / 2))
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
    }
  }

  return 0;
}
