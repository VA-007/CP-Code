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

  for (ll i = 1; i <= t; i++)
  {
    ll ans = 0, op = 0;
    ll k, n;

    cin >> n >> k;
    string s;
    cin >> s;

    int low = 0, high = n - 1;
    while (low <= high)
    {
      if (s[low] != s[high])
      {
        ans++;
      }
      low++;
      high--;
    }

    low = 0;
    high = n - 1;
    
    if (ans > k)
    {
      while ((k != ans) && (low <= high))
      {
        if (s[low] != s[high])
        {
          op++;
          ans--;
        }
        low++;
        high--;
      }
    }
    else if (ans < k)
    {
      while ((k != ans) && (low <= high))
      {
        if (s[low] == s[high])
        {
          op++;
          ans++;
        }
        low++;
        high--;
      }
    }

    cout << "Case #" << i << ": " << op << endl;
  }

  return 0;
}
