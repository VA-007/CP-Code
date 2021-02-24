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

  while (t--)
  {
    int n, k, x, y;
    cin >> n >> k >> x >> y;

    int temp = x;
    while (1)
    {
      if (temp == y)
      {
        cout << "YES" << endl;
        break;
      }
      else if ((temp + k) % n == x)
      {
        cout << "NO" << endl;
        break;
      }
      else
      {
        temp = (k + temp) % n;
      }
    }
  }

  return 0;
}


