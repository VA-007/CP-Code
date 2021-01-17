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
    ll n, d;
    cin >> n >> d;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int a = arr[0];
    int b = arr[1];

    if (a > d or b > d)
    {
      cout << "NO" << endl;
      continue;
    }

    bool flag = true;
    int i = n - 1;
    while (arr[i] > d)
    {
      if (a + b <= d)
      {
        i--;
        continue;
      }
      else
      {
        flag = false;
        break;
      }
    }

    if (flag == true)
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
