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

  ll t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;
    vector<ll> odd, even;
    ll x;

    for (int i = 0; i < n; i++)
    {
      cin >> x;
      x % 2 == 0 ? even.push_back(x) : odd.push_back(x);
    }

    ll i = 0, j = 0;
    while (i < even.size() && j < odd.size() - 1)
    {
      cout << odd[j] << " " << even[i] << " ";
      i++;
      j++;
    }

    while (i < even.size())
    {
      cout << even[i] << " ";
      i++;
    }
    while (j < odd.size())
    {
      cout << odd[j] << " ";
      j++;
    }

    cout << endl;
  }

  return 0;
}
