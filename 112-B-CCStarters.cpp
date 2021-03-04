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
    ll s;
    cin >> s;
    vector<ll> intro(s);

    for (ll i = 0; i < s; i++)
    {
      cin >> intro[i];
    }

    ll ans = 0, temp = s, j = 0;

    while (temp--)
    {
      ll e;
      cin >> e;
      vector<ll> epis(e);
      for (ll i = 0; i < e; i++)
      {
        cin >> epis[i];

        if (i == 0)
        {
          ans += epis[i];
        }
        else
        {
          ans += epis[i] - intro[j];
        }
      }
      j++;
    }

    cout << ans << endl;
  }

  return 0;
}
