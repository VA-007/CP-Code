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
    vector<ll> arr(10);
    ll k = 0;

    for (ll i = 0; i < 10; i++)
    {
      cin >> arr[i];
    }
    cin >> k;

    ll ans = 0;
    for (ll i = 9; i >= 0; i--)
    {
      if (ans <= k)
      {
        ans += arr[i];
        if (ans > k)
        {
          cout << i + 1 << endl;
          break;
        }
        else if (ans == k)
        {
          for (ll j = i - 1; j >= 0; j--)
          {
            if (arr[j] > 0)
            {
              cout << j + 1 << endl;
              break;
            }
          }
          break;
        }
      }
    }
  }

  return 0;
}

// 5
// 1 10 1 5 3 2 4 9 0 100
// 100
// 2 0 1 0 0 0 0 0 0 10
// 12
// 2 0 1 0 0 0 0 10 0 0
// 0
// 2 0 1 0 0 0 0 0 0 10
// 10
// 1 10 1 5 3 2 4 9 0 100
// 125