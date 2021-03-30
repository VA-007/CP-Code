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
    int n, m;
    cin >> n >> m;

    vector<ll> arr(n);
    vector<ll> hash(m + 1, 0);
    bool flag = false;

    for (ll i = 0; i < n; i++)
    {
      cin >> arr[i];
      hash[arr[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
      if (hash[i] == 0)
      {
        flag = true;
        break;
      }
    }

    if (flag == true)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }

  return 0;
}
