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
    ll n, a, b;
    cin >> n >> a >> b;

    vector<string> s(n);

    string eq = "EQUINOX";

    for (ll i = 0; i < n; i++)
    {
      cin >> s[i];
    }

    ll sar = 0, anu = 0;

    for (ll i = 0; i < n; i++)
    {
      bool flag = false;
      for (int j = 0; j < eq.size(); j++)
      {
        if (s[i][0] == eq[j])
        {
          flag = true;
          break;
        }
      }

      if (flag)
        sar += a;
      else
        anu += b;
    }

    if (sar > anu)
      cout << "SARTHAK" << endl;
    else if (sar < anu)
      cout << "ANURADHA" << endl;
    else
      cout << "DRAW" << endl;
  }

  return 0;
}
