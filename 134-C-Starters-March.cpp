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
    // int n;
    // cin >> n;
    // vector<int> s(n);

    // for (int i = 0; i < n; i++)
    //   cin >> s[i];

    // if (n == 1)
    // {
    //   cout << "YES" << endl;
    //   continue;
    // }
    // bool flag = true;
    // for (int i = 0; i < n; i++)
    // {
    //   if (s[i] == 1)
    //   {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //       if (s[j] == 1 && (j - i < 6))
    //       {
    //         flag = false;
    //         break;
    //       }

    //       if (j - i == 6)
    //       {
    //         i = j - 1;
    //         break;
    //       }
    //     }
    //   }
    // }

    // if (flag == true)
    //   cout << "YES" << endl;
    // else
    //   cout << "NO" << endl;

    ll n, k, x, d;
    cin >> n >> k;

    if (n % k == 0)
    {
      d = n / k;
      x = k;
    }
    else
    {
      d = n / k + 1;
      x = n % k;
    }

    cout << d << " " << x << endl;
  }

  return 0;
}
