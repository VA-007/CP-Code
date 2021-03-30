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
    ll n, m;
    cin >> n >> m;

    vector<ll> arr(n);
    vector<ll> brr(m);

    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    for (ll i = 0; i < m; i++)
    {
      cin >> brr[i];
    }

    ll i = 0, j = 0;

    ll ans = 0;

    if (arr[0] > brr[m - 1])
    {
      cout << 2 << endl;
      continue;
    }
    else if (brr[0] > arr[n - 1])
    {
      cout << 1 << endl;
      continue;
    }

    bool change = false;
    while (i < n && j < m)
    {
      if (arr[i] < brr[j] && change == false)
      {
        i++;
      }
      else if (arr[i] < brr[j] && change == true)
      {
        i++;
        ans++;
        change = false;
      }
      else if (arr[i] > brr[j] && change == true)
      {
        j++;
      }
      else if (arr[i] > brr[j] && change == false)
      {
        ans++;
        j++;
        change = true;
      }
    }

    cout << ++ans << endl;
  }

  return 0;
}
