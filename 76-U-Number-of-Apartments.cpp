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

  int n, m, a, count = 0;
  cin >> m >> n >> a;

  int area1 = m * n;
  int area2 = a * a;

  if (a >= m && a >= n)
  {
    cout << 1;
  }
  else if (area1 % area2 == 0)
  {
    cout << area1 / area2;
  }
  else
  {
    cout << area1 % area2;
  }

  return 0;
}
