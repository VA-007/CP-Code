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
    int n, q;
    cin >> n >> q;

    vector<ll> arr(n), qrr(q);

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    for (int i = 0; i < q; i++)
    {
      cin >> qrr[i];
    }

    for (int i = 0; i < q; i++)
    {
      int pos = 0;
      for (int j = 0; j < n; j++)
      {
        if (arr[j] == qrr[i])
        {
          pos = j;
          break;
        }
      }

      ll sum1 = 0;
      ll sum2 = 0;
      for (int j = 0; j <= pos; j++)
      {
        sum1 += arr[j];
      }
      for (int j = pos; j < n; j++)
      {
        sum2 += arr[j];
      }

      if (sum1 > sum2)
      {
        cout << sum2 << endl;
      }
      else
      {
        cout << sum1 << endl;
      }
    }
  }

  return 0;
}