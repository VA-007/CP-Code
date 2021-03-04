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
    string a, b;
    cin >> a >> b;

    ll azeroes = 0, bzeroes = 0;

    if (a == b)
    {
      cout << "Yes" << endl;
    }
    else
    {
      for (int i = 0; i < n; i++)
      {
        if (a[i] == '0')
        {
          azeroes++;
        }
        if (b[i] == '0')
        {
          bzeroes++;
        }
      }

      if (((azeroes == bzeroes) && (a[n - 1] != '1')) || ((azeroes == bzeroes) && (a[0] != '0') && b[0] == '1'))
      {
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
  }

  return 0;
}
