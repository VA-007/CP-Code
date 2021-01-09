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
    int n, k, x, y;
    cin >> n >> k >> x >> y;

    if (x == y)
    {
      cout << n << " " << n << endl;
    }
    else if (x > y)
    {
      int x1 = n, y1 = n - x + y;
      int x2 = n - x + y, y2 = n;
      int x3 = 0, y3 = x - y;
      int x4 = x - y, y4 = 0;

      int ans = k % 4;

      if (ans == 1)
      {
        cout << x1 << " " << y1 << endl;
      }
      else if (ans == 2)
      {
        cout << x2 << " " << y2 << endl;
      }
      else if (ans == 3)
      {
        cout << x3 << " " << y3 << endl;
      }
      else
      {
        cout << x4 << " " << y4 << endl;
      }
    }
    else
    {
      int x1 = n - y + x, y1 = n;
      int x2 = n, y2 = n - y + x;
      int x3 = y - x, y3 = 0;
      int x4 = 0, y4 = y - x;

      int ans = k % 4;

      if (ans == 1)
      {
        cout << x1 << " " << y1 << endl;
      }
      else if (ans == 2)
      {
        cout << x2 << " " << y2 << endl;
      }
      else if (ans == 3)
      {
        cout << x3 << " " << y3 << endl;
      }
      else
      {
        cout << x4 << " " << y4 << endl;
      }
    }
  }

  return 0;
}