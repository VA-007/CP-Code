#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin >> t;

  while (t--)
  {
    ll n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for (ll i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> arr[i][j];
      }
    }

    int ans = 0, neg = 0, z = 0, mn = INT_MAX;

    for (ll i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        ans += abs(arr[i][j]);

        mn = min(mn, abs(arr[i][j]));

        if (arr[i][j] < 0)
          neg++;
        if (arr[i][j] == 0)
          z++;
      }
    }

    if (neg % 2 == 0)
      cout << ans << endl;
    else
    {
      if (z > 0)
        cout << ans << endl;
      else
        cout << ans - 2 * mn << endl;
    }
  }

  return 0;
}