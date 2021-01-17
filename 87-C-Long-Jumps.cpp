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
    int n;
    cin >> n;

    ll arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    vector<ll> sum(n, 0);
    int j = 0;
                                          //  7 3 1 2 3
    for (int i = 0; i < n; i++)
    {
      j = i;
      while (j < n)
      {
        sum[i] += arr[j];
        j += arr[j];
      }
    }

    cout << *max_element(sum.begin(), sum.end()) << endl;
  }

  return 0;
}
