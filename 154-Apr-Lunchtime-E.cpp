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

  ll n;
  cin >> n;

  ll arr[n];

  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum = (sum + arr[i] + MOD) % MOD;
  }

  ll q;
  cin >> q;

  while (q--)
  {
    ll x;
    cin >> x;

    sum += sum;
    sum = sum % MOD;
    cout << sum << endl;
  }

  return 0;
}