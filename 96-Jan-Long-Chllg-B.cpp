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

  int t;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    ll a = abs(arr[0] - arr[1]), b = abs(arr[1] - arr[n - 1]), c = abs(arr[0] - arr[n - 1]);
    cout << a + b + c << endl;
  }

  return 0;
}
