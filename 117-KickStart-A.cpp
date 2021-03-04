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

  int t = 0;
  cin >> t;

  for (int k = 1; k <= t; k++)
  {
    ll n, b;
    cin >> n >> b;

    ll arr[n];
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    sort(arr, arr + n);

    for (ll i = 0; i < n; i++)
    {
      if (b - arr[i] >= 0)
      {
        ans++;
        b -= arr[i];
      }
    }

    cout << "Case #" << k << ": " << ans << endl;
  }

  return 0;
}
