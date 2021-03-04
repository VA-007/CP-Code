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

  while (t--)
  {
    ll n;
    cin >> n;

    vector<ll> arr(n), brr(n), ans(n);

    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
      brr[i] = arr[i];
    }

    sort(brr.begin(), brr.end(), greater<int>());
    int time = 1;
    for (ll i = 0; i < n; i++)
    {
      for (ll j = 0; j < n; j++)
      {
        if (brr[i] == arr[j])
        {
          arr[j] = -1;
          ans[j] = time++;
        }
      }
    }

    for (ll i = 0; i < n; i++)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
