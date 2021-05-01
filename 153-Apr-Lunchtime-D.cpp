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
    ll n, w, wr;
    cin >> n >> w >> wr;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
      cin >> arr[i];

    sort(arr.begin(), arr.end());

    w -= wr;
    if (w <= 0)
    {
      cout << "YES" << endl;
      continue;
    }

    bool flag = false;
    for (ll i = 0; i < n - 1; i++)
    {
      if (arr[i] == arr[i + 1])
        w -= (arr[i++] * 2);

      if (w <= 0)
        flag = true;
    }

    flag == true ? cout << "YES" : cout << "NO";
    cout << endl;
  }

  return 0;
}
