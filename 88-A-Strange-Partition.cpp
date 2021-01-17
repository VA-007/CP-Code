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

  int t;
  cin >> t;

  while (t--)
  {
    ll n, x;
    cin >> n >> x;

    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    ll sum = 0;
    sum = accumulate(arr, arr + n, sum);

    if (sum % x == 0 and sum % 2 != 0)
    {
      cout << sum / x << " " << (sum / x) + 1 << endl;
    }
    else
    {
      cout << sum / x << " " << sum / x << endl;
    }
  }

  return 0;
}
