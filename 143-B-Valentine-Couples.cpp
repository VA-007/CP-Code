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

  ll t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;
    vector<ll> boy(n);
    vector<ll> girl(n);

    for (ll i = 0; i < n; i++)
      cin >> boy[i];

    for (ll i = 0; i < n; i++)
      cin >> girl[i];

    sort(boy.begin(), boy.end());
    sort(girl.begin(), girl.end(), greater<int>());

    ll ans = INT_MIN;
    for (ll i = 0; i < n; i++)
      ans = max(boy[i] + girl[i], ans);

    cout << ans << endl;
  }

  return 0;
}
