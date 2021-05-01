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

  vector<ll> sq;

  for (int j = 1; j < 330; j++)
    sq.push_back(j * j);

  int t = 0;
  cin >> t;
  while (t--)
  {
    int n = 0;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
      cin >> arr[i];

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
      if (!binary_search(sq.begin(), sq.end(), arr[i]))
      {
        flag = false;
        break;
      }
    }

    flag == true ? cout << "NO" : cout << "YES";
    cout << endl;
  }

  return 0;
}
