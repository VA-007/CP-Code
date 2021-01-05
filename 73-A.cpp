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
    int n, k;
    cin >> n >> k;

    int arr[n], sum = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      sum += arr[i];
    }

    if (sum % k == 0)
    {
      cout << 0;
    }
    else
    {
      cout << 1;
    }

    cout << endl;
  }

  return 0;
}
