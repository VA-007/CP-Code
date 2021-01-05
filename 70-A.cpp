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
    int a, b, c, d = 0;
    cin >> a >> b >> c;

    d = max(a, b);
    cout << max(d, c) << endl;
  }

  return 0;
}
