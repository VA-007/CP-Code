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
    ll d, c;
    cin >> d >> c;

    ll a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    ll sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;

    if (a1 + a2 + a3 >= 150)
    {
      sum1 += a1 + a2 + a3;
      sum4 += a1 + a2 + a3 + d;
    }
    else
    {
      sum1 += a1 + a2 + a3 + d;
      sum4 += a1 + a2 + a3 + d;
    }

    if (b1 + b2 + b3 >= 150)
    {
      sum2 += b1 + b2 + b3;
      sum4 += b1 + b2 + b3 + d;
    }
    else
    {
      sum2 += b1 + b2 + b3 + d;
      sum4 += b1 + b2 + b3 + d;
    }

    sum3 = sum1 + sum2 + c;

    if (sum3 < sum4)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
