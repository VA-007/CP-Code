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

  int n, x, y, tips = 0;
  cin >> n >> x >> y;

  int arr[n], brr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> brr[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] >= brr[i] && x > 0)
    {
      tips += arr[i];
      x--;
    }
    else if (brr[i] >= arr[i] && y > 0)
    {
      tips += brr[i];
      y--;
    }
  }

  cout << tips;

  return 0;
}
