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
    ll w, h, n;
    cin >> w >> h >> n;

    ll res = 1;

    while (w % 2 == 0)
    {
      w /= 2;
      res *= 2;
    }

    while (h % 2 == 0)
    {
      h /= 2;
      res *= 2;
    }

    if (res >= n)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }

    // if (w % 2 != 0 && h % 2 != 0 && n > 1)
    // {
    //   cout << "NO" << endl;
    //   continue;
    // }
    // else if (w % 2 != 0 && h % 2 != 0 && n == 1)
    // {
    //   cout << "YES" << endl;
    //   continue;
    // }

    // ll res = 1;

    // bool flag = true;

    // if (w % 2 == 0 && h % 2 == 0)
    // {
    //   while (!(n <= res))
    //   {
    //     if (w % 2 == 0)
    //     {
    //       w = w / 2;
    //       res *= 2;
    //     }
    //     else if (h % 2 == 0)
    //     {
    //       h = h / 2;
    //       res *= 2;
    //     }
    //     else
    //     {
    //       flag = false;
    //       break;
    //     }
    //   }

    //   if (flag == false)
    //   {
    //     cout << "NO" << endl;
    //     continue;
    //   }
    //   else
    //   {
    //     cout << "YES" << endl;
    //     continue;
    //   }
    // }

    // if (w % 2 == 0)
    // {
    //   while (!(n <= res))
    //   {
    //     if (w % 2 == 0)
    //     {
    //       w = w / 2;
    //       res *= 2;
    //     }
    //     else
    //     {
    //       flag = false;
    //       break;
    //     }
    //   }

    //   if (flag == false)
    //   {
    //     cout << "NO" << endl;
    //     continue;
    //   }
    //   else
    //   {
    //     cout << "YES" << endl;
    //     continue;
    //   }
    // }
    // else
    // {
    //   while (!(n <= res))
    //   {
    //     if (h % 2 == 0)
    //     {
    //       h = h / 2;
    //       res *= 2;
    //     }
    //     else
    //     {
    //       flag = false;
    //       break;
    //     }
    //   }

    //   if (flag == false)
    //   {
    //     cout << "NO" << endl;
    //     continue;
    //   }
    //   else
    //   {
    //     cout << "YES" << endl;
    //     continue;
    //   }
    // }
  }

  return 0;
}
