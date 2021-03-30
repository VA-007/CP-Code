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
    ll w1, w2, x1, x2, m;
    cin >> w1 >> w2 >> x1 >> x2 >> m;

    ll a = x1 * m;
    ll b = x2 * m;
    ll temp = w2 - w1;

    if (temp <= b && temp >= a)
      cout << 1 << endl;
    else
      cout << 0 << endl;
  }

  return 0;
}
