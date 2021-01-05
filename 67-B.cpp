#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define int long long

using namespace std;

main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int x, y = 0, k = 0, n, count = 0;
    cin >> x >> y >> k >> n;

    if (abs(x - y) % (2 * k))
    {
      cout << "No";
    }
    else
    {
      cout << "Yes";
    }

    cout << endl;
    
    // if (x < y)
    // {
    //   while (!(x > y))
    //   {
    //     x += k;
    //     y -= k;
    //     count++;

    //     if (x == y)
    //     {
    //       cout << "Yes" << endl;
    //       break;
    //     }
    //   }
    //   if (x != y)
    //   {
    //     cout << "No" << endl;
    //     continue;
    //   }
    // }
    // if (x > y)
    // {
    //   while (!(x < y))
    //   {
    //     x -= k;
    //     y += k;
    //     count++;

    //     if (x == y)
    //     {
    //       cout << "Yes" << endl;
    //       break;
    //     }
    //   }
    //   if (x != y)
    //   {
    //     cout << "No" << endl;
    //     continue;
    //   }
    // }
  }

  return 0;
}