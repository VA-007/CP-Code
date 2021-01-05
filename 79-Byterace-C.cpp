#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define int long long

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

    vector<int> ans(n + 1, 0);
    while (q--)
    {
      int des = 1;
      int l, r;
      cin >> l >> r;

      for (int i = l; i <= r; i++)
      {
        ans[i] += des;
        des++;
      }
    }

    for (int i = 1; i < ans.size(); i++)
    {
      cout << ans[i] << " ";
    }

    cout << endl;
  }

  return 0;
}
