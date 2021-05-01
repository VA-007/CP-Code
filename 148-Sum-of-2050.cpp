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

  int t = 0;
  cin >> t;

  while (t--)
  {
    ll n;
    cin >> n;

    if (n % 2050)
    {
      cout << -1 << endl;
      continue;
    }

    n /= 2050;
    vector<int> ans;
    while (n != 0)
    {
      ans.push_back(n % 10);
      n /= 10;
    }

    ll sum = 0;
    sum = accumulate(ans.begin(), ans.end(), sum);
    cout << sum << endl;

    
  }

  return 0;
}
