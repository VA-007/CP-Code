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
    ll n, m, k;
    cin >> n >> m >> k;

    ll ans = 0;

    if (n > m)
    {
      ll temp = n - m + 1;
      ans = (1 + 1 + k) ^ (m + n + k);

      while (temp--)
      {
        ans ^= (n + 1 + k);
        n--;
      }

      cout << ans << endl;
    }
    else if (m > n)
    {
      ll temp = m - n + 1;

      ans = (1 + 1 + k) ^ (m + n + k);
      int i = 1;
      while (temp--)
      {
        ans ^= (n + i + k);
        n--;
        i++;
      }

      cout << ans << endl;
    }
    else if (m == n)
    {
      // if ()
      // {
      // }
    }
  }

  return 0;
}