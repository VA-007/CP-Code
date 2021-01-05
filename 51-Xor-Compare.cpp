#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    long long x, y, n, z = 0;
    cin >> x >> y >> n;

    int count = 0;
    for (int i = 0; i <= n; i++)
    {
      if (z <= n)
      {
        if ((x ^ z) < (y ^ z))
        {
          count++;
        }
      }
      z++;
    }

    cout << count << endl;
  }

  return 0;
}
