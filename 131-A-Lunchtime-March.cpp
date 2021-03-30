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
    ll a, y, x;
    cin >> a >> y >> x;

    ll ans = 0;

    if (y > a)
    {
      ans = (a * x) + 1;
    }
    if (a >= y)
    {
      ans = y * x;
    }

    cout << ans << endl;
  }

  return 0;
}