#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#define ll long long

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n, ans = 0;
    cin >> n;

    vector<ll> weights(1000, 0), hits(1000, 0);

    for (int i = 1; i <= n; i++)
    {
      cin >> weights[i];
    }

    for (int i = 1; i <= n; i++)
    {
      cin >> hits[i];
    }

    if (n == 2 && (weights[1] < weights[2]))
    {
      cout << 0 << endl;
    }
    else if (n == 2 && hits[1] == 1 && weights[1] > weights[2])
    {
      cout << 2 << endl;
    }
    else if (n == 2 && hits[1] > 1 && weights[1] > weights[2])
    {
      cout << 1 << endl;
    }

    if (n == 3)
    {
      int a = 0, b = 0, c = 0, a1 = 0, b1 = 0, c1 = 0;

      for (int i = 1; i <= n; i++)
      {
        if (weights[i] == 1)
        {
          a = a1 = i;
        }
        else if (weights[i] == 2)
        {
          b = b1 = i;
        }
        else if (weights[i] == 3)
        {
          c = c1 = i;
        }
      }

      while (b <= a)
      {
        b += hits[b1];
        ans++;
      }
      while (c <= b)
      {
        c += hits[c1];
        ans++;
      }

      cout << ans << endl;
    }

    if (n == 4)
    {
      int a = 0, b = 0, c = 0, d = 0, a1 = 0, b1 = 0, c1 = 0, d1 = 0;

      for (int i = 1; i <= n; i++)
      {
        if (weights[i] == 1)
        {
          a = a1 = i;
        }
        else if (weights[i] == 2)
        {
          b = b1 = i;
        }
        else if (weights[i] == 3)
        {
          c = c1 = i;
        }
        else if (weights[i] == 4)
        {
          d = d1 = i;
        }
      }

      while (b <= a)
      {
        b += hits[b1];
        ans++;
      }
      while (c <= b)
      {
        c += hits[c1];
        ans++;
      }
      while (d <= c)
      {
        d += hits[d1];
        ans++;
      }

      cout << ans << endl;
    }
  }

  return 0;
}

// 5
// 3
// 3 1 2
// 1 4 5
// 3
// 3 2 1
// 1 1 1
// 4
// 2 1 4 3
// 4 1 2 4
// 2
// 2 1
// 1 1
// 2
// 1 2
// 1 1