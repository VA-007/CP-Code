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
    int m, h;
    cin >> m >> h;

    if ((m / (h * h)) <= 18)
    {
      cout << 1 << endl;
    }
    else if ((m / (h * h)) <= 24 && (m / (h * h)) >= 19)
    {
      cout << 2 << endl;
    }
    else if ((m / (h * h)) <= 29 && (m / (h * h)) >= 25)
    {
      cout << 3 << endl;
    }
    else if ((m / (h * h)) >= 30)
    {
      cout << 4 << endl;
    }
  }

  return 0;
}
