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
    ll n, k;
    cin >> n >> k;

    if (k == 0)
    {
      cout << n << endl;
    }
    else
    {
      cout << n % k << endl;
    }
  }

  return 0;
}
