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
    ll n, k;
    cin >> n >> k;

    string arr[n];
    ll brr[k];

    for (int i = 0; i < k; i++)
    {
      cin >> brr[i];
    }
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < arr[i].size(); j++)
      {
        if (arr[i][j] == '1')
        {
          ans += brr[j];
        }
      }

      cout<<ans<<endl;
      ans = 0;
    }
  }

  return 0;
}
