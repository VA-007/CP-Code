#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long
#define MOD 1000000007

using namespace std;

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s;
  cin >> s;
  ll n = s.size();

  vector<ll> prefix(n), suffix(n);
  prefix[0] = 0;
  suffix[n - 1] = 0;

  for (ll i = 1; i < n; i++)
  {
    if (s[i] == 'v' && s[i - 1] == 'v')
      prefix[i] = prefix[i - 1] + 1;
    else
      prefix[i] = prefix[i - 1];
  }

  for (ll i = n - 2; i >= 0; i--)
  {
    if (s[i] == 'v' && s[i + 1] == 'v')
      suffix[i] = suffix[i + 1] + 1;
    else
      suffix[i] = suffix[i + 1];
  }

  ll ans = 0;
  for (ll i = 0; i < n; i++)
  {
    if (s[i] == 'o')
      ans += prefix[i] * suffix[i];
  }

  cout << ans << endl;

  return 0;
}