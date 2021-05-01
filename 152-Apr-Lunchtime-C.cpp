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
    ll l;
    cin >> l;
    string s;
    cin >> s;

    ll one = 0, zero = 0;

    bool flag = false;
    for (ll i = 1; i < l + 1; i++)
    {
      if (s[i - 1] == '0')
        zero++;
      else
        one++;

      if (one >= zero)
      {
        flag = true;
        break;
      }
    }

    flag ? cout << "YES" : cout << "NO";
    cout << endl;
  }

  return 0;
}
